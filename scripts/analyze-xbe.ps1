$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
$python = Join-Path $projectRoot '.venv/Scripts/python.exe'
$xbe = Join-Path $projectRoot 'game/default.xbe'
if (-not (Test-Path -LiteralPath $xbe)) { throw 'Missing game/default.xbe; import the ISO first.' }
New-Item -ItemType Directory -Force -Path (Join-Path $projectRoot 'analysis') | Out-Null
Get-FileHash -LiteralPath $xbe -Algorithm SHA256 | Select-Object Hash |
    ConvertTo-Json | Set-Content -LiteralPath (Join-Path $projectRoot 'analysis/xbe-hash.json') -Encoding utf8
Push-Location (Join-Path $projectRoot 'external/xboxrecomp')
try {
    & $python -m tools.xbe_parser $xbe --json (Join-Path $projectRoot 'game/default_analysis.json')
    if ($LASTEXITCODE -ne 0) { throw 'XBE analysis failed.' }
} finally { Pop-Location }
# Keep parser JSON beside the XBE: upstream disassembly expects that location.
Copy-Item -LiteralPath (Join-Path $projectRoot 'game/default_analysis.json') -Destination (Join-Path $projectRoot 'analysis/default_analysis.json')
