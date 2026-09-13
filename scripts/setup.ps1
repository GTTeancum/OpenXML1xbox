$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
Push-Location $projectRoot
try {
    git submodule update --init --recursive
    if ($LASTEXITCODE -ne 0) { throw 'Submodule setup failed.' }
    if (-not (Test-Path -LiteralPath '.venv/Scripts/python.exe')) {
        py -3.12 -m venv .venv
        if ($LASTEXITCODE -ne 0) { throw 'Python environment creation failed.' }
    }
    & ./.venv/Scripts/python.exe -m pip install -r requirements.txt
    if ($LASTEXITCODE -ne 0) { throw 'Python dependency installation failed.' }
} finally { Pop-Location }
