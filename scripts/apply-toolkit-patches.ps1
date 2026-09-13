$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
$toolkit = Join-Path $projectRoot 'external/xboxrecomp'
$patch = Join-Path $projectRoot 'patches/xboxrecomp-xml1-memory.patch'
$pin = (git -C $toolkit rev-parse HEAD).Trim()
if ($pin -ne '3706cefa416aedea6d10c87ced805f89576560c4') { throw "Unexpected XboxRecomp pin: $pin" }
git -C $toolkit apply --reverse --check $patch 2>$null
if ($LASTEXITCODE -eq 0) { Write-Host 'XML1 memory patch already applied.'; exit 0 }
git -C $toolkit apply --check $patch
if ($LASTEXITCODE -ne 0) { throw 'Toolkit patch conflicts with local changes.' }
git -C $toolkit apply $patch
if ($LASTEXITCODE -ne 0) { throw 'Toolkit patch application failed.' }
