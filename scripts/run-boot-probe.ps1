param([ValidateRange(1,120)][int]$Seconds = 20, [switch]$TestPad, [switch]$LiveDX8, [switch]$APU, [switch]$Optimized)
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
if ([DateTimeOffset]::UtcNow -ge [DateTimeOffset]::Parse('2026-09-14T12:14:26Z')) {
    throw 'The 30-hour goal cutoff has passed. Report status before further work.'
}
$priorWatchdog = $env:RECOMP_WATCHDOG_SECS
$priorTestPad = $env:XML1_TEST_PAD
$priorLiveDX8 = $env:XML1_LIVE_DX8
$priorAPU = $env:XML1_APU
Push-Location $projectRoot
try {
    $env:RECOMP_WATCHDOG_SECS = [string]$Seconds
    if ($TestPad) { $env:XML1_TEST_PAD = '1' }
    if ($LiveDX8) { $env:XML1_LIVE_DX8 = '1' }
    if ($APU) { $env:XML1_APU = '1' }
    $probePath = if ($Optimized) { './build/optimized/Release/xml1-boot-probe.exe' } else { './build/project/Release/xml1-boot-probe.exe' }
    & $probePath
    $probeExit = $LASTEXITCODE
    Write-Host "Boot probe exit: $probeExit (3 is the diagnostic time bound, not gameplay success)."
} finally {
    $env:RECOMP_WATCHDOG_SECS = $priorWatchdog
    $env:XML1_TEST_PAD = $priorTestPad
    $env:XML1_LIVE_DX8 = $priorLiveDX8
    $env:XML1_APU = $priorAPU
    Pop-Location
}
