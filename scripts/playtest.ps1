param([ValidateRange(1,120)][int]$Minutes = 30)
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
$gameExe = Join-Path $projectRoot 'build/optimized/Release/xml1-boot-probe.exe'
$workerExe = Join-Path $projectRoot 'build/renderer/Release/xml1-dx8-worker.exe'
foreach ($required in @($gameExe, $workerExe, (Join-Path $projectRoot 'game/default.xbe'))) {
    if (!(Test-Path -LiteralPath $required)) { throw "Missing playtest requirement: $required" }
}
if (Get-Process -Name xml1-boot-probe -ErrorAction SilentlyContinue) {
    throw 'An XML1 game process is already running. Close it before starting another playtest.'
}
$saved = @{}
$settings = @{
    XML1_TEST_PAD = $null
    XML1_TEST_INPUT_FILE = $null
    XML1_TEST_A_FRAME = $null
    XML1_TEST_MOVE_FRAME = $null
    XML1_TEST_GAME_DIR = $null
    XML1_LIVE_DX8 = '1'
    XML1_DX8_VISIBLE = '1'
    XML1_DX8_NO_CAPTURE = '1'
    XML1_APU = '1'
    XML1_DSP_JIT = $null
    RECOMP_WATCHDOG_SECS = [string]($Minutes * 60)
}
foreach ($name in $settings.Keys) {
    $saved[$name] = [Environment]::GetEnvironmentVariable($name, 'Process')
    if ($null -eq $settings[$name]) {
        Remove-Item -LiteralPath "Env:$name" -ErrorAction SilentlyContinue
    } else {
        [Environment]::SetEnvironmentVariable($name, $settings[$name], 'Process')
    }
}
$log = Join-Path $projectRoot ('build/human-playtest-{0}.log' -f (Get-Date -Format 'yyyyMMdd-HHmmss'))
Write-Host 'OpenXML1 human playtest: connect an XInput controller before starting.'
Write-Host 'A: light attack/select | B: heavy attack/back | X: grab/use | Y: jump'
Write-Host 'LB: health potion | RB: energy potion | RT + face button: power'
Write-Host "Start: pause. Session limit: $Minutes minutes. Log: $log"
Write-Host 'Close the game window to stop the game and its audio.'
Push-Location $projectRoot
try {
    # Native stderr is diagnostic output, not a PowerShell terminating error.
    $ErrorActionPreference = 'Continue'
    & $gameExe *> $log
    $gameExit = $LASTEXITCODE
    Write-Host "Playtest ended (exit $gameExit). Log: $log"
    Write-Host 'Exit 3 is the session time limit; other failures should be reported with the log.'
} finally {
    Pop-Location
    foreach ($name in $settings.Keys) {
        if ($null -eq $saved[$name]) {
            Remove-Item -LiteralPath "Env:$name" -ErrorAction SilentlyContinue
        } else {
            [Environment]::SetEnvironmentVariable($name, $saved[$name], 'Process')
        }
    }
}
