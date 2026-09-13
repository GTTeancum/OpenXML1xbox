$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
$toolkit = Join-Path $projectRoot 'external/xboxrecomp'
$pin = (git -C $toolkit rev-parse HEAD).Trim()
if ($pin -ne '3706cefa416aedea6d10c87ced805f89576560c4') { throw "Unexpected XboxRecomp pin: $pin" }
foreach ($patchName in @('xboxrecomp-xml1-memory.patch', 'xboxrecomp-flag-joins.patch', 'xboxrecomp-dsp-integration.patch')) {
    $patch = Join-Path $projectRoot "patches/$patchName"
    git -C $toolkit apply --reverse --check $patch 2>$null
    if ($LASTEXITCODE -eq 0) { Write-Host "$patchName already applied."; continue }
    git -C $toolkit apply --check $patch
    if ($LASTEXITCODE -ne 0) { throw "Toolkit patch conflicts with local changes: $patchName" }
    git -C $toolkit apply $patch
    if ($LASTEXITCODE -ne 0) { throw "Toolkit patch application failed: $patchName" }
}
