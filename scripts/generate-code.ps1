param([switch]$Disassemble, [string]$XbePath)
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
$python = Join-Path $projectRoot '.venv/Scripts/python.exe'
if (-not $XbePath) { $XbePath = Join-Path $projectRoot '!GAME/default.xbe' }
$XbePath = (Resolve-Path -LiteralPath $XbePath -ErrorAction Stop).Path
Push-Location (Join-Path $projectRoot 'external/xboxrecomp')
try {
    if ($Disassemble) {
        & $python -m tools.disasm $XbePath -o ../../analysis/disasm --force --seed-functions ../../config/function-seeds.json
        if ($LASTEXITCODE -ne 0) { throw 'Disassembly failed.' }
    }
    & $python (Join-Path $PSScriptRoot 'validate-seeds.py')
    if ($LASTEXITCODE -ne 0) { throw 'Verified function seed missing.' }
    & $python -m tools.func_id $XbePath --functions ../../analysis/disasm/functions.json --strings ../../analysis/disasm/strings.json --xrefs ../../analysis/disasm/xrefs.json --output ../../analysis/func_id
    if ($LASTEXITCODE -ne 0) { throw 'Function identification failed.' }
    & $python -m tools.abi_analysis $XbePath --disasm-dir ../../analysis/disasm --func-id-dir ../../analysis/func_id --output-dir ../../analysis/abi
    if ($LASTEXITCODE -ne 0) { throw 'ABI analysis failed.' }
    & $python -m tools.recomp $XbePath --all --split 250 --game-name 'X-Men Legends' --disasm-dir ../../analysis/disasm --func-id-dir ../../analysis/func_id --abi-dir ../../analysis/abi --gen-dir ../../src/recomp/gen --output-dir ../../analysis/recomp --manual-functions ../../config/manual-functions.json
    if ($LASTEXITCODE -ne 0) { throw 'Code generation failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-generated.py')
    & $python (Join-Path $PSScriptRoot 'guard-package-loading.py')
    if ($LASTEXITCODE -ne 0) { throw 'Package guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-pc-menu.py')
    if ($LASTEXITCODE -ne 0) { throw 'Generated diagnostic guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-character-limits.py')
    if ($LASTEXITCODE -ne 0) { throw 'Character layout guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-newgame-plus.py')
    if ($LASTEXITCODE -ne 0) { throw 'NewGame+ boundary guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-frame-limit.py')
    if ($LASTEXITCODE -ne 0) { throw 'Frame-limit guard failed.' }
} finally { Pop-Location }
