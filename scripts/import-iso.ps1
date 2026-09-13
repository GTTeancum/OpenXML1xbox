param([Parameter(Mandatory=$true)][string]$IsoPath)
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
$iso = (Resolve-Path -LiteralPath $IsoPath).Path
if (-not (Test-Path -LiteralPath $iso -PathType Leaf)) { throw 'ISO path must name a file.' }
$python = Join-Path $projectRoot '.venv/Scripts/python.exe'
if (-not (Test-Path -LiteralPath $python)) { throw 'Run scripts/setup.ps1 first.' }
$gameDir = Join-Path $projectRoot 'game'
if ((Test-Path -LiteralPath $gameDir) -and (Get-ChildItem -LiteralPath $gameDir -Force | Select-Object -First 1)) {
    throw 'game/ is not empty. Preserve the current extraction; choose a fresh project or resolve it manually.'
}
New-Item -ItemType Directory -Force -Path $gameDir,(Join-Path $projectRoot 'analysis') | Out-Null
$digest = Get-FileHash -LiteralPath $iso -Algorithm SHA256
[ordered]@{fileName=[IO.Path]::GetFileName($iso);sha256=$digest.Hash;size=(Get-Item -LiteralPath $iso).Length} |
    ConvertTo-Json | Set-Content -LiteralPath (Join-Path $projectRoot 'analysis/iso.json') -Encoding utf8
Push-Location (Join-Path $projectRoot 'external/xboxrecomp')
try {
    & $python -m tools.xiso unpack $iso -o $gameDir
    if ($LASTEXITCODE -ne 0) { throw 'ISO extraction failed; partial output has been preserved.' }
} finally { Pop-Location }
& (Join-Path $PSScriptRoot 'analyze-xbe.ps1')
