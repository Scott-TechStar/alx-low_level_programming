#!/usr/bin/python3
# Auth: John Mwadime
def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (list of list of int): The grid representing the island.

    Returns:
    int: The perimeter of the island.
    """
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                perimeter += 4  # Start with the assumption that all sides are perimeter

                # Check left neighbor
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Subtract 2 if adjacent land exists on the left

                # Check top neighbor
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract 2 if adjacent land exists on the top

    return perimeter
