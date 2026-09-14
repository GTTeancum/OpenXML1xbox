"""Finalize OBS recording after the human game process exits. No UI automation."""
import argparse
from contextlib import closing
import base64
import hashlib
import json
import os
from pathlib import Path
import sys


def stop_recording(request):
    if not request('GetRecordStatus')['outputActive']:
        print('OBS is not recording; no action needed.')
        return
    result = request('StopRecord')
    print('OBS recording stopped and finalized:', result.get('outputPath', '(path unavailable)'))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--check', action='store_true', help='Check connectivity without stopping recording')
    args = parser.parse_args()
    path = Path(os.environ['APPDATA']) / 'obs-studio/plugin_config/obs-websocket/config.json'
    if not path.exists():
        print('OBS auto-stop skipped: OBS WebSocket is not configured.')
        return
    config = json.loads(path.read_text(encoding='utf-8-sig'))
    if not config.get('server_enabled'):
        print('OBS auto-stop skipped: OBS WebSocket is disabled.')
        return
    import websocket
    # Credentials stay in OBS's existing local config and are never logged.
    with closing(websocket.create_connection(
        f"ws://127.0.0.1:{int(config.get('server_port', 4455))}",
        timeout=3, http_no_proxy=['127.0.0.1', 'localhost'],
    )) as connection:
        hello = json.loads(connection.recv())
        if hello['op'] != 0:
            raise RuntimeError('Unexpected OBS handshake')
        identify = {'rpcVersion': 1, 'eventSubscriptions': 0}
        if 'authentication' in hello['d']:
            auth = hello['d']['authentication']
            def digest(value):
                return base64.b64encode(hashlib.sha256(value.encode()).digest()).decode()
            secret = digest(config['server_password'] + auth['salt'])
            identify['authentication'] = digest(secret + auth['challenge'])
        connection.send(json.dumps({'op': 1, 'd': identify}))
        if json.loads(connection.recv())['op'] != 2:
            raise RuntimeError('OBS authentication failed')
        connection.settimeout(15)
        sequence = 0

        def request(kind):
            nonlocal sequence
            sequence += 1
            request_id = str(sequence)
            connection.send(json.dumps({'op': 6, 'd': {
                'requestType': kind, 'requestId': request_id,
            }}))
            while True:
                response = json.loads(connection.recv())
                if response['op'] != 7 or response['d']['requestId'] != request_id:
                    continue
                response = response['d']
                if not response['requestStatus']['result']:
                    raise RuntimeError(f"OBS {kind} failed: {response['requestStatus'].get('comment', 'request rejected')}")
                return response.get('responseData', {})

        if args.check:
            print('OBS auto-stop connection ready; recording active:', request('GetRecordStatus')['outputActive'])
        else:
            stop_recording(request)


if __name__ == '__main__':
    try:
        main()
    except Exception as error:
        print(f'OBS auto-stop could not complete: {error}', file=sys.stderr)
        sys.exit(1)
