"""Compare paired native movie captures made with XML1_CAPTURE_MOVIE_SOURCE=1.

This checks the texture handoff only, not MPEG correctness or A/V timing.
"""
from pathlib import Path
import numpy as np

root = Path(__file__).resolve().parents[1]
source = np.fromfile(root / 'build/movie-source-frame300.bgra', dtype=np.uint8).reshape(480, 1024, 4)
upload = np.fromfile(root / 'build/movie-upload-frame300.bgra', dtype=np.uint8).reshape(512, 1024, 4)
different = np.any(source[:, :640] != upload[:480, :640], axis=2)
count = int(different.sum())
print(f'Converted source/upload differences: {count} of {different.size} pixels')
raise SystemExit(1 if count else 0)
