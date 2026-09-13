param([ValidateRange(1,120)][int]$Seconds = 20)
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
if ([DateTimeOffset]::UtcNow -ge [DateTimeOffset]::Parse('2026-09-14T12:14:26Z')) {
    throw 'The 30-hour goal cutoff has passed. Report status before further work.'
}
$priorWatchdog = $env:RECOMP_WATCHDOG_SECS
Push-Location $projectRoot
try {
    $env:RECOMP_WATCHDOG_SECS = [string]$Seconds
    & ./build/project/Release/xml1-boot-probe.exe
    $probeExit = $LASTEXITCODE
    Write-Host "Boot probe exit: $probeExit (3 is the diagnostic time bound, not gameplay success)."
} finally {
    $env:RECOMP_WATCHDOG_SECS = $priorWatchdog
    Pop-Location
}
