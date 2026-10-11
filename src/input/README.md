# Input

Guest Xbox input calls, controller retry policy, keyboard/mouse mappings and
the process-local test channel live here. `guest_input` bridges guest ABI to
host controls; `pc_controls` owns bindings/settings and `pc_gamepad` translates
them into gamepad state. Test-channel events stay inside the target process.
Headers use the `input/` prefix from the `src` include root. Host-only tests
live in `tests/input`; UI presentation belongs in `src/ui`.
