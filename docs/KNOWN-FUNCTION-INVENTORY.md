# Known-function inventory

This is an organization pass over existing knowledge, not an attempt to recover
every original function. Names describe confirmed behavior; they do not claim
to reproduce original developer symbols.

## Authoritative records

- `config/symbols/xml1.json`: 209 identities, comprising 49 existing manual
  overrides and 160 generated names. Every entry carries a guest address, module,
  ABI, confidence and evidence. The registry pins the original XBE SHA256.
- `config/symbols/xml1-reference-review.json`: disposition of 180 distinct
  address references found in handwritten source. Of these, 74 are registered
  and 106 are deferred with evidence paths and reasons. Other registered
  identities come from guard scripts, tests and investigation notes.
- `config/symbols/xml1-test-reference-review.json`: supplemental 90-reference
  test census: 48 registered, 40 deferred and 2 excluded as XML2-specific.
  Test doubles and limited branch assertions are not treated as full identities.
- `config/manual-functions.json`: compatibility mapping checked against the
  registry, not a separate authority for new names.

## Module distribution

| Module | Manual | Generated |
| --- | ---: | ---: |
| `audio` | 39 | 3 |
| `engine/actors` | 0 | 18 |
| `engine/combat` | 0 | 15 |
| `engine/core` | 0 | 4 |
| `engine/powers` | 0 | 14 |
| `engine/progression` | 0 | 57 |
| `engine/resources` | 0 | 9 |
| `engine/saves` | 0 | 9 |
| `engine/scripting` | 0 | 7 |
| `engine/world` | 0 | 8 |
| `graphics/dx8` | 2 | 3 |
| `input` | 7 | 0 |
| `runtime/guest` | 1 | 0 |
| `ui` | 0 | 10 |
| `ui/menus` | 0 | 3 |

## Naming and placement

The registry selects 152 named generated functions to be are grouped under `known/<module>/`. Eight
remain named within their original numbered units: four parser arena lifecycle
functions, the parser attribute-text query, and three DX8 synchronization
functions. Registry placement reasons document shared storage or declarations.
Moving these functions merely for symmetry could change behavior.

All other guest entries retain their address-based names and numbered chunks.
A call site's local purpose, fixture label or XML2 name is not sufficient proof
of a complete XML1 function identity. The review file preserves those partial
contracts for a later sweep without promoting them into speculative names.
The deferred list includes non-XML1/example references, which are not candidates
for guest function movement at all.

## Verification status

The complete 160-name emission preserves all 25,855 guest entries and passes
inverse-name body comparison for every function. The Release build, exact
regenerated-output rebuild, 50 tooling tests, and native progression,
powerup-definition and combat-event fixtures passed. The final gameplay check
reached level 1, verified movement and inspected character and options screens
before returning to gameplay. Audio was muted; full-level completion and
player-facing save/load were not tested.

The verified named tree is published under `src/recomp/named`. See
[the organization guide](SOURCE-ORGANIZATION.md) for workflow, completion evidence
and verification limits, and [the historical record](SOURCE-ORGANIZATION-HISTORY.md)
for intermediate findings. Unknown functions remain explicitly deferred.
