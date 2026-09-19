# Sample the guest thread during the intro movies, where the session log shows the worst stalls.
param([int]$DelayMs = 6000, [int]$Seconds = 40)
$ErrorActionPreference='Stop'
$projectRoot=Split-Path -Parent $PSScriptRoot
$exe=Join-Path $projectRoot 'XBOXgame\X-Men Legends.exe'
$env:XML1_LIVE_DX8='1'; $env:XML1_DX8_VISIBLE='1'; $env:XML1_DX8_NO_CAPTURE='1'
$env:XML1_DX8_RESOLUTION='1920x1080'; $env:XML1_APU='1'
$env:XML1_NATIVE_PROFILE='1'; $env:XML1_PROFILE_DELAY_MS="$DelayMs"
$env:RECOMP_WATCHDOG_SECS="$Seconds"
Push-Location $projectRoot
try { & $exe *> (Join-Path $projectRoot 'build\profile-stalls.log'); "exit $LASTEXITCODE" } finally { Pop-Location }
