param([string]$RunName = ('run-' + (Get-Date -Format 'yyyyMMdd-HHmmss')), [ValidateSet(64,128)][int]$MemoryMiB=64, [switch]$CaptureAudio)
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
$run=Join-Path $root ('work/nxdk-xemu/'+$RunName)
if(Test-Path -LiteralPath $run) {throw 'Use a new run name to preserve previous evidence.'}
New-Item -ItemType Directory -Path $run | Out-Null
$xemuRoot='C:\Games\Emulators\Xemu'
$shared=Join-Path $root 'work/nxdk-xemu/shared'
New-Item -ItemType Directory -Path $shared -Force | Out-Null
$hdd=Join-Path $shared 'xbox_hdd.qcow2'
if(!(Test-Path -LiteralPath $hdd)) {Copy-Item -LiteralPath (Join-Path $xemuRoot 'HDD/xbox_hdd.qcow2') -Destination $hdd}
$eeprom=Join-Path $run 'eeprom.bin'
Copy-Item -LiteralPath (Join-Path $xemuRoot 'EEPROM/eeprom.bin') -Destination $eeprom
$xbe=Join-Path $PSScriptRoot 'bin/default.xbe'
if(!(Test-Path -LiteralPath $xbe)) {throw 'Build the NXDK XBE first.'}
Copy-Item -LiteralPath (Join-Path $PSScriptRoot 'xml1.map') -Destination (Join-Path $run 'xml1.map')
Copy-Item -LiteralPath (Join-Path $root 'XBOXgame/default.xbe') -Destination (Join-Path $PSScriptRoot 'bin/guest.xbe') -Force
$iso=Join-Path $run 'xml1-nxdk.iso'
& 'C:\nxdk\tools\extract-xiso\build\extract-xiso.exe' -c (Join-Path $PSScriptRoot 'bin') $iso > (Join-Path $run 'xiso.log')
if($LASTEXITCODE) {throw 'XISO creation failed.'}
$config=Join-Path $run 'xemu.toml'
$screens=Join-Path $run 'screenshots'
New-Item -ItemType Directory -Path $screens | Out-Null
@"
[general]
show_welcome = false
skip_boot_anim = true
screenshot_dir = '$screens'
[general.updates]
check = false
[input]
auto_bind = false
background_input_capture = false
[net]
enable = false
[sys.files]
bootrom_path = '$xemuRoot\MCPX\mcpx_1.0.bin'
flashrom_path = '$xemuRoot\BIOS\xbox-4627_debug.bin'
eeprom_path = '$eeprom'
hdd_path = '$hdd'
dvd_path = '$iso'
"@ | Set-Content -LiteralPath $config -Encoding utf8NoBOM
$args=@('-config_path', $config, '-m', "$MemoryMiB", '-qmp', 'tcp:127.0.0.1:46370,server,nowait', '-gdb', 'tcp:127.0.0.1:46371', '-serial', ('file:'+(Join-Path $run 'serial.log')))
$oldAudioDriver=$env:SDL_AUDIO_DRIVER
$oldAudioOutput=$env:SDL_AUDIO_DISK_OUTPUT_FILE
try {
    if($CaptureAudio) {$env:SDL_AUDIO_DRIVER='disk'; $env:SDL_AUDIO_DISK_OUTPUT_FILE=Join-Path $run 'audio.raw'}
    $process=Start-Process -FilePath (Join-Path $xemuRoot 'xemu.exe') -ArgumentList $args -WorkingDirectory $run -WindowStyle Hidden -PassThru -RedirectStandardOutput (Join-Path $run 'stdout.log') -RedirectStandardError (Join-Path $run 'stderr.log')
} finally {$env:SDL_AUDIO_DRIVER=$oldAudioDriver; $env:SDL_AUDIO_DISK_OUTPUT_FILE=$oldAudioOutput}
@{pid=$process.Id;run=$run;started=(Get-Date).ToUniversalTime().ToString('o');qmp=46370;gdb=46371;memory_mib=$MemoryMiB;xbe_sha256=(Get-FileHash $xbe -Algorithm SHA256).Hash} | ConvertTo-Json | Set-Content -LiteralPath (Join-Path $run 'run.json')
Write-Output "Started isolated emulator PID $($process.Id), evidence: $run"
