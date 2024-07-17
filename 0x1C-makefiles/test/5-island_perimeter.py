#!/usr/bin/python3
"""
This module calculates the perimeter of an island described in a grid.
"""

def island_perimeter(grid):
    """
   
   Returns perimeter of the island

    grid represnts water zone by zero and land by one

    """

    height = len(grid)
    width = len(grid[0])
    sides = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    sides += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    sides += 1
    return size * 4 - sides * 2
