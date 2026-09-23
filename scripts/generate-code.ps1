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
    & $python (Join-Path $PSScriptRoot 'guard-xmlb.py')
    if ($LASTEXITCODE -ne 0) { throw 'XMLB cache guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-pc-menu.py')
    if ($LASTEXITCODE -ne 0) { throw 'Generated diagnostic guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-character-limits.py')
    if ($LASTEXITCODE -ne 0) { throw 'Character layout guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-character-filter.py')
    if ($LASTEXITCODE -ne 0) { throw 'Character combat-property guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-newgame-plus.py')
    if ($LASTEXITCODE -ne 0) { throw 'NewGame+ boundary guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-frame-limit.py')
    if ($LASTEXITCODE -ne 0) { throw 'Frame-limit guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-script-extensions.py')
    if ($LASTEXITCODE -ne 0) { throw 'Script-extension guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-filter-event.py')
    if ($LASTEXITCODE -ne 0) { throw 'Filter event guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-bishop-drain.py')
    if ($LASTEXITCODE -ne 0) { throw 'Bishop contact guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-handler-live-trace.py')
    if ($LASTEXITCODE -ne 0) { throw 'Handler live trace guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-vertex-state.py')
    if ($LASTEXITCODE -ne 0) { throw 'Vertex viewport guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-operand-trace.py')
    if ($LASTEXITCODE -ne 0) { throw 'Raven operand trace guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-energy.py')
    & $python (Join-Path $PSScriptRoot 'guard-raven-power-bindings.py')
    if ($LASTEXITCODE -ne 0) { throw 'Raven energy guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-damage.py')
    if ($LASTEXITCODE -ne 0) { throw 'Raven damage guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-powerup-metadata.py')
    if ($LASTEXITCODE -ne 0) { throw 'Raven powerup metadata guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-secondary-victim.py')
    if ($LASTEXITCODE -ne 0) { throw 'Raven secondary victim guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-loop-sound.py')
    if ($LASTEXITCODE -ne 0) { throw 'Raven loop sound guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-effect-sound.py')
    if ($LASTEXITCODE -ne 0) { throw 'Effect/sound event guard failed.' }
} finally { Pop-Location }
