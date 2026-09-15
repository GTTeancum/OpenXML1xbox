"""Acknowledged, process-local input for the game's existing file test channel.

Never generates OS input. Use a private command file and the targeted renderer's
dx8-live.log. Waiting for acknowledgment prevents overwriting unread commands.
"""
from pathlib import Path
import time


class NativePcTestChannel:
    def __init__(self, command_file, worker_log, process):
        self.command_file = Path(command_file)
        self.worker_log = Path(worker_log)
        self.process = process
        # The runtime parses unsigned 32-bit IDs. Leave ample increment room.
        self.sequence = int(time.time()) & 0x7fffffff

    def send(self, command, timeout=8):
        if not command or '\n' in command or '\r' in command:
            raise ValueError('Expected one nonempty command')
        if self.process.poll() is not None:
            raise RuntimeError('Target game has exited')
        self.sequence += 1
        if self.sequence > 0xffffffff:
            raise OverflowError('Test channel exhausted its command IDs')
        line = f'{self.sequence} {command}'
        try:
            offset = self.worker_log.stat().st_size
        except FileNotFoundError:
            offset = 0
        self.command_file.write_text(line + '\n')
        expected = '[PC INPUT TEST] ' + line
        deadline = time.monotonic() + timeout
        while time.monotonic() < deadline:
            if self.process.poll() is not None:
                raise RuntimeError('Target game exited awaiting ' + line)
            try:
                with self.worker_log.open('rb') as stream:
                    # A fresh renderer truncates the log on startup.
                    if self.worker_log.stat().st_size < offset:
                        offset = 0
                    stream.seek(offset)
                    lines = stream.read().decode(errors='replace').splitlines()
            except FileNotFoundError:
                lines = ()
            if expected in lines:
                return self.sequence
            time.sleep(.02)
        # Do not retry or overwrite: the command's execution is now uncertain.
        raise TimeoutError('No renderer acknowledgment for ' + line)
