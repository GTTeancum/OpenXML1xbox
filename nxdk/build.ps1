param([switch]$Prepare)
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
    if($Prepare) {
        python nxdk/generate_graphics.py
        if($LASTEXITCODE){throw 'Graphics adapter generation failed'}
        python nxdk/prepare.py
        if($LASTEXITCODE){throw 'NXDK preparation failed'}
        python nxdk/generate_kernel.py
        if($LASTEXITCODE){throw 'Kernel wrapper generation failed'}
    }
    $env:MSYSTEM='MINGW64'
    $unixRoot=(& C:\msys64\usr\bin\cygpath.exe -u $root).Trim()
    & C:\msys64\usr\bin\bash.exe -lc "cd '$unixRoot'; bash nxdk/build.sh > work/nxdk-build.log 2>&1"
    $code=$LASTEXITCODE
    Get-Content work/nxdk-build.log -Tail 20
    if($code){throw "NXDK build failed ($code); see work/nxdk-build.log"}
} finally {Pop-Location}
