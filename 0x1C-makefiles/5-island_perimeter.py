#!/usr/bin/python3
"""
This module calculates the perimeter of an island described in a grid.
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.
    
    Args:
        grid (list of list of int): A list of lists where 0 represents a water zone and 1 represents a land zone.
        
    Returns:
        int: The perimeter of the island.
    """
    columns = len(grid[0])
    perimeter = 0
    rows = len(grid)

    a = 0
    while a < rows:
        d = 0
        while d < columns:
            if grid[a][d] == 1:
                if a == 0 or grid[a - 1][d] == 0:
                    perimeter += 1
                if a == rows - 1 or grid[a + 1][d] == 0:
                    perimeter += 1
                if d == 0 or grid[a][d - 1] == 0:
                    perimeter += 1
                if d == columns - 1 or grid[a][d + 1] == 0:
                    perimeter += 1
            d += 1
        a += 1

    return perimeter
