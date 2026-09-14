param([switch]$Disassemble)
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
$python = Join-Path $projectRoot '.venv/Scripts/python.exe'
Push-Location (Join-Path $projectRoot 'external/xboxrecomp')
try {
    if ($Disassemble) {
        & $python -m tools.disasm ../../game/default.xbe -o ../../analysis/disasm --force --seed-functions ../../config/function-seeds.json
        if ($LASTEXITCODE -ne 0) { throw 'Disassembly failed.' }
    }
    & $python (Join-Path $PSScriptRoot 'validate-seeds.py')
    if ($LASTEXITCODE -ne 0) { throw 'Verified function seed missing.' }
    & $python -m tools.func_id ../../game/default.xbe --functions ../../analysis/disasm/functions.json --strings ../../analysis/disasm/strings.json --xrefs ../../analysis/disasm/xrefs.json --output ../../analysis/func_id
    if ($LASTEXITCODE -ne 0) { throw 'Function identification failed.' }
    & $python -m tools.abi_analysis ../../game/default.xbe --disasm-dir ../../analysis/disasm --func-id-dir ../../analysis/func_id --output-dir ../../analysis/abi
    if ($LASTEXITCODE -ne 0) { throw 'ABI analysis failed.' }
    & $python -m tools.recomp ../../game/default.xbe --all --split 250 --game-name 'X-Men Legends' --disasm-dir ../../analysis/disasm --func-id-dir ../../analysis/func_id --abi-dir ../../analysis/abi --gen-dir ../../src/recomp/gen --output-dir ../../analysis/recomp --manual-functions ../../config/manual-functions.json
    if ($LASTEXITCODE -ne 0) { throw 'Code generation failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-generated.py')
    & $python (Join-Path $PSScriptRoot 'guard-package-loading.py')
    if ($LASTEXITCODE -ne 0) { throw 'Package guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-pc-menu.py')
    if ($LASTEXITCODE -ne 0) { throw 'Generated diagnostic guards failed.' }
} finally { Pop-Location }
