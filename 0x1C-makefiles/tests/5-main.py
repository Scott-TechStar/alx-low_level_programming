#!/usr/bin/python3
"""
5-main
"""
import sys
sys.path.append('..')  # Add parent directory to the Python path

from ('5-island_perimeter') import island_perimeter  # Now you can directly import the function

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
