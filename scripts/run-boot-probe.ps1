param([ValidateRange(1,120)][int]$Seconds = 20, [switch]$TestPad)
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
if ([DateTimeOffset]::UtcNow -ge [DateTimeOffset]::Parse('2026-09-14T12:14:26Z')) {
    throw 'The 30-hour goal cutoff has passed. Report status before further work.'
}
$priorWatchdog = $env:RECOMP_WATCHDOG_SECS
$priorTestPad = $env:XML1_TEST_PAD
Push-Location $projectRoot
try {
    $env:RECOMP_WATCHDOG_SECS = [string]$Seconds
    if ($TestPad) { $env:XML1_TEST_PAD = '1' }
    & ./build/project/Release/xml1-boot-probe.exe
    $probeExit = $LASTEXITCODE
    Write-Host "Boot probe exit: $probeExit (3 is the diagnostic time bound, not gameplay success)."
} finally {
    $env:RECOMP_WATCHDOG_SECS = $priorWatchdog
    $env:XML1_TEST_PAD = $priorTestPad
    Pop-Location
}
