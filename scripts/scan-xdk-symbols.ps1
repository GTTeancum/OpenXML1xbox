$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
$scannerRoot = Join-Path $projectRoot 'work/reference/XbSymbolDatabase'
$scannerPin = '20eced544726f5558c5a408458f38a086cc4e543'
Push-Location $projectRoot
try {
    if (-not (Test-Path -LiteralPath $scannerRoot)) {
        git clone https://github.com/Cxbx-Reloaded/XbSymbolDatabase.git $scannerRoot
        if ($LASTEXITCODE -ne 0) { throw 'Symbol database clone failed.' }
        git -C $scannerRoot checkout --detach $scannerPin
        if ($LASTEXITCODE -ne 0) { throw 'Symbol database pin checkout failed.' }
    }
    if ((git -C $scannerRoot rev-parse HEAD).Trim() -ne $scannerPin) { throw 'Unexpected symbol database revision.' }
    cmake -S $scannerRoot -B build/symbols -G 'Visual Studio 17 2022' -A x64 -DXBSDB_BUILD_CLI=ON -DXBSDB_BUILD_UNITTEST=OFF -DXBSDB_INSTALL_LIB=OFF -DXBSDB_INSTALL_CLI=OFF
    if ($LASTEXITCODE -ne 0) { throw 'Symbol database configuration failed.' }
    cmake --build build/symbols --config Release --target XbSymbolDatabaseCLI --parallel 2
    if ($LASTEXITCODE -ne 0) { throw 'Symbol database build failed.' }
    New-Item -ItemType Directory -Force analysis | Out-Null
    & build/symbols/projects/cli/Release/XbSymbolDatabaseCLI.exe game/default.xbe -d -e | Set-Content -Encoding utf8 analysis/xdk-symbols.log
    if ($LASTEXITCODE -ne 0) { throw 'XDK symbol scan failed.' }
    & .venv/Scripts/python.exe scripts/parse-xdk-symbols.py
    if ($LASTEXITCODE -ne 0) { throw 'XDK symbol parsing failed.' }
} finally { Pop-Location }
