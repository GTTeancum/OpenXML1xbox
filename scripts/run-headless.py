"""Run real DX8 rendering without showing a game or console window."""
import argparse
import datetime
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys
import time

ROOT = Path(__file__).resolve().parents[1]

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--muted', action='store_true', help='Silence final output; retain DSP/PCM/pacing')
    parser.add_argument('--seconds', type=int, default=60)
    parser.add_argument('--data-root', type=Path, required=True, help='Isolated test data/save directory')
    parser.add_argument('--sequence', type=Path, help='JSON list of [seconds, action] process-local commands; @capture ID requests a native frame')
    parser.add_argument('--input-file', type=Path, help='Process-local input commands only')
    parser.add_argument('--capture-pcm', action='store_true')
    parser.add_argument('--profile', action='store_true', help='Sample game thread after 70 seconds; do not use for acceptance FPS')
    args = parser.parse_args()
    if not 1 <= args.seconds <= 1800:
        parser.error('--seconds must be between 1 and 1800')
    data = args.data_root.resolve()
    if data == (ROOT / 'game').resolve() or not (data / 'default.xbe').is_file():
        parser.error('--data-root must be an isolated fixture containing default.xbe')
    for directory in ('UDATA', 'TDATA'):
        save = data / directory
        if save.is_symlink() or save.resolve().is_relative_to((ROOT / 'game').resolve()):
            parser.error('Fixture save directories must not link to original game saves')
    running = subprocess.run(['powershell.exe', '-NoProfile', '-Command',
        "if (Get-Process -Name xml1-boot-probe -ErrorAction SilentlyContinue) { exit 1 }"],
        creationflags=subprocess.CREATE_NO_WINDOW)
    if running.returncode:
        parser.error('A game is already running; concurrent runs share renderer diagnostics')
    stamp = datetime.datetime.now().strftime('%Y%m%d-%H%M%S')
    output = ROOT / 'work' / ('headless-' + stamp)
    output.mkdir()
    env = os.environ.copy()
    for key in list(env):
        if key.startswith(('XML1_', 'RECOMP_WATCHDOG')):
            del env[key]
    env['XML1_DX8_CAPTURE_REQUEST'] = str(output / 'capture-request.txt')
    env.update(XML1_TEST_PAD='1', XML1_TEST_GAME_DIR=str(data), RECOMP_WATCHDOG_SECS=str(args.seconds))
    if args.input_file:
        env['XML1_TEST_INPUT_FILE'] = str(args.input_file.resolve())
    if args.profile:
        env.update(XML1_NATIVE_PROFILE='1', XML1_PROFILE_DELAY_MS='70000')
    if args.capture_pcm:
        env['XML1_CAPTURE_DSP_PCM'] = '1'
    events=json.loads(args.sequence.read_text()) if args.sequence else []
    if not isinstance(events,list) or any(not isinstance(e,list) or len(e)!=2 or not isinstance(e[0],(int,float)) or not 0<=e[0]<=args.seconds or not isinstance(e[1],str) for e in events):
        parser.error('Sequence must contain [seconds, action] pairs within the run duration')
    if any(events[i][0]>events[i+1][0] for i in range(len(events)-1)):
        parser.error('Sequence times must be ordered')
    if events:
        controls=args.input_file.resolve() if args.input_file else output / 'input.txt'
        controls.write_text('0 neutral\n')
        env['XML1_TEST_INPUT_FILE']=str(controls)
    command = [str(ROOT / 'build/optimized/Release/xml1-boot-probe.exe'), '--headless']
    if args.muted:
        command.append('--muted')
    print(f'Hidden native 1080p run: {output}', flush=True)
    with (output / 'game.log').open('wb') as log:
        started_wall=time.time()
        process = subprocess.Popen(command, cwd=ROOT, env=env, stdout=log,
            stderr=subprocess.STDOUT, creationflags=subprocess.CREATE_NO_WINDOW)
        (output / 'run.json').write_text(json.dumps(dict(pid=process.pid, command=command,
            seconds=args.seconds, data_root=str(data), muted=args.muted), indent=2))
        try:
            started=time.monotonic()
            for index, (second, action) in enumerate(events,1):
                if not 0 <= second <= args.seconds:
                    raise ValueError('Sequence event outside test duration')
                while process.poll() is None and time.monotonic()-started < second:
                    time.sleep(.05)
                if process.poll() is not None: break
                if action.startswith('@capture '):
                    (output / 'capture-request.txt').write_text(action.split()[1]+'\n')
                else:
                    controls.write_text(f'{index} {action}\n')
                print(f'{second}s: {action}',flush=True)
            result = process.wait(timeout=max(1,args.seconds+30-(time.monotonic()-started)))
        except subprocess.TimeoutExpired:
            process.kill()
            process.wait()
            raise RuntimeError('Game exceeded its diagnostic watchdog; terminated')
        finally:
            if process.poll() is None:
                process.kill(); process.wait()
            names=['dx8-live.log', 'dx8-live-errors.log', 'dx8-vblank.log', 'dx8-vblank-errors.log']
            if args.profile: names.append('native-profile.csv')
            for name in names:
                source = ROOT / 'build' / name
                if source.exists() and source.stat().st_mtime >= started_wall:
                    shutil.copy2(source, output / name)
            if args.capture_pcm:
                for name in ('apu-dsp-output.pcm', 'apu-dsp-output.csv'):
                    source = ROOT / 'build' / name
                    if source.exists():
                        shutil.copy2(source, output / name)
    print(f'Exit {result}: 3 means diagnostic time bound, not acceptance. Evidence: {output}', flush=True)
    return 0 if result in (0, 3) else result

if __name__ == '__main__':
    sys.exit(main())
