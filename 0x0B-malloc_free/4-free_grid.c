#include "main.h"
#include <stlib.h>
/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: The 2-dimensional array of integers to be freed.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
int len;
for (len = 0; len < height; len++)
{
free(grid[len]);
}
free(grid);
}
