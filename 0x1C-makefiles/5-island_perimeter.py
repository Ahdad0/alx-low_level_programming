#!/usr/bin/python3
"""
Module get Island Perimeter
Made by MEGATRON
"""


def island_perimeter(grid):
    """ Calculat perimeter of grid where "one" is found"""
    p = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    p += 1  # top-side
                if row == (len(grid) - 1) or grid[row + 1][col] == 0:
                    p += 1  # bottom-side
                if col == 0 or grid[row][col - 1] == 0:
                    p += 1  # left-side
                if col == (len(grid[0]) - 1) or grid[row][col + 1] == 0:
                    p += 1  # right-side
    return p
