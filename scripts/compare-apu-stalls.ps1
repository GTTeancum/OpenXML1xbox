# Diagnostic: same boot sequence with and without the APU, to isolate audio-lock stalls.
param([int]$Seconds = 30, [switch]$NoApu)
$ErrorActionPreference='Stop'
$projectRoot=Split-Path -Parent $PSScriptRoot
$exe=Join-Path $projectRoot 'XBOXgame\X-Men Legends.exe'
$env:XML1_LIVE_DX8='1'; $env:XML1_DX8_VISIBLE='1'; $env:XML1_DX8_NO_CAPTURE='1'
$env:XML1_DX8_RESOLUTION='1920x1080'
if ($NoApu) { Remove-Item Env:XML1_APU -ErrorAction SilentlyContinue } else { $env:XML1_APU='1' }
Remove-Item Env:XML1_NATIVE_PROFILE -ErrorAction SilentlyContinue
$env:RECOMP_WATCHDOG_SECS="$Seconds"
& $exe *> (Join-Path $projectRoot 'build\apu-compare.log')
"exit $LASTEXITCODE"
