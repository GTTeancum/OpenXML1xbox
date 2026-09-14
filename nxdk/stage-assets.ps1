param([string]$Source)
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
if(!$Source){$Source=Join-Path $root 'XBOXgame'}
$Source=(Resolve-Path -LiteralPath $Source).Path
if(!(Test-Path -LiteralPath (Join-Path $Source 'default.xbe'))){throw 'Source must contain the original default.xbe and extracted game assets.'}
$target=Join-Path $PSScriptRoot 'bin'
New-Item -ItemType Directory -Path $target -Force | Out-Null
New-Item -ItemType Directory -Path (Join-Path $root 'work') -Force | Out-Null
# Copy assets, preserving the newly compiled default.xbe. No deletes or mirroring.
& robocopy $Source $target /E /XJ /R:1 /W:1 /XF default.xbe default_analysis.json /NFL /NDL /NP ('/LOG:'+(Join-Path $root 'work/nxdk-stage-assets.log'))
if($LASTEXITCODE -ge 8){throw "Asset copy failed ($LASTEXITCODE)."}
Copy-Item -LiteralPath (Join-Path $Source 'default.xbe') -Destination (Join-Path $target 'guest.xbe') -Force
Write-Output "Original assets staged in $target; the compiled default.xbe is preserved."
