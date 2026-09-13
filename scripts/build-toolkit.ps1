param([ValidateSet('Debug','Release')][string]$Configuration = 'Release')
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
Push-Location $projectRoot
try {
    cmake -S . -B build/project -G 'Visual Studio 17 2022' -A x64
    if ($LASTEXITCODE -ne 0) { throw 'CMake configuration failed.' }
    cmake --build build/project --config $Configuration --parallel 4
    if ($LASTEXITCODE -ne 0) { throw 'Toolkit build failed.' }
} finally { Pop-Location }
