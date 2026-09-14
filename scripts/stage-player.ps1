param([string]$Destination)
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
if (!$Destination) { $Destination = Join-Path $projectRoot '!GAME' }
$Destination = [System.IO.Path]::GetFullPath($Destination)
if (!(Test-Path -LiteralPath (Join-Path $Destination 'default.xbe'))) { throw 'Stage into the existing asset directory containing default.xbe.' }
$gameExe = Join-Path $projectRoot 'build/optimized/Release/xml1-boot-probe.exe'
$workerExe = Join-Path $projectRoot 'build/renderer/Release/xml1-dx8-worker.exe'
# Updating binaries must not certify an installation whose active media still
# depend on another folder. Do this before replacing any staged executable.
foreach ($relative in @('media','movies','sounds')) {
    $assetDirectory = Join-Path $Destination $relative
    if (!(Test-Path -LiteralPath $assetDirectory -PathType Container)) { throw "Missing player assets: $assetDirectory" }
    $pending = [System.Collections.Generic.Queue[string]]::new()
    $pending.Enqueue($assetDirectory)
    $fileCount = 0
    while ($pending.Count) {
        $current = Get-Item -LiteralPath $pending.Dequeue() -Force
        if ($current.Attributes -band [System.IO.FileAttributes]::ReparsePoint) {
            throw "Player staging requires real asset directories, not links: $($current.FullName)"
        }
        foreach ($entry in Get-ChildItem -LiteralPath $current.FullName -Force) {
            # Retained migration backups are inactive; never follow their links.
            if ($entry.Name.StartsWith('.previous-')) { continue }
            if ($entry.Attributes -band [System.IO.FileAttributes]::ReparsePoint) {
                throw "Player staging contains an asset link: $($entry.FullName)"
            }
            if ($entry.PSIsContainer) { $pending.Enqueue($entry.FullName) }
            else { $fileCount++ }
        }
    }
    if (!$fileCount) { throw "Empty player asset directory: $assetDirectory" }
}
foreach ($required in @($gameExe,$workerExe)) {
    if (!(Test-Path -LiteralPath $required -PathType Leaf)) { throw "Missing staging input: $required" }
}
foreach ($directory in @('runtime','build')) {
    New-Item -ItemType Directory -Path (Join-Path $Destination $directory) -Force | Out-Null
}
Copy-Item -LiteralPath $gameExe -Destination (Join-Path $Destination 'X-Men Legends.exe')
Copy-Item -LiteralPath $workerExe -Destination (Join-Path $Destination 'runtime/xml1-dx8-worker.exe')
foreach ($directory in @((Split-Path $gameExe),(Split-Path $workerExe))) {
    $target = if ($directory -eq (Split-Path $gameExe)) { $Destination } else { Join-Path $Destination 'runtime' }
    Get-ChildItem -LiteralPath $directory -Filter '*.dll' | Copy-Item -Destination $target
}
if (!(Test-Path -LiteralPath (Join-Path $Destination 'build.ini'))) { Copy-Item -LiteralPath (Join-Path $projectRoot 'build.ini') -Destination (Join-Path $Destination 'build.ini') }
Set-Content -LiteralPath (Join-Path $Destination '.xml1-player-layout') -Value 'OpenXML1 player layout version 2' -Encoding ascii
@'
X-Men Legends

Double-click X-Men Legends.exe to play. Connect an XInput controller first.
The game uses 1080p widescreen and has no session timer.
Select Quit at the bottom of the main menu, or close the game window, to stop
the game and its audio.

build.ini controls language and loose/packaged asset selection.
Assets live directly beside this EXE. UDATA and TDATA contain saved data.
runtime contains the required native Direct3D 8 renderer.
build contains diagnostic logs if a problem needs reporting.

Keep this entire folder together when moving or copying the game.
No Python, developer checkout, environment variables or separate launcher is needed.
The original archive is retained for switching back to packaged mode.
Loose files are already prepared; new installations can prepare them using the
EXE's first-run progress dialog. Existing files and saved games are preserved.

Loose assets and PKGB modding are enabled. See build.ini for configuration.
'@ | Set-Content -LiteralPath (Join-Path $Destination 'Read Me.txt') -Encoding utf8
New-Item -ItemType Directory -Path (Join-Path $Destination 'runtime/licenses') -Force | Out-Null
Copy-Item -LiteralPath (Join-Path $projectRoot 'external/miniz/LICENSE') -Destination (Join-Path $Destination 'runtime/licenses/miniz.txt')
Write-Host "Player build staged at: $Destination"
exit 0
