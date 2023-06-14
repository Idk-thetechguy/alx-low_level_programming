#include "main.h"
#include <stdlib.h>
/**
* free_grid - Deallocates a 2D integer array.
* @grid: The array of integers arranged in two dimensions that needs to be
*        deallocated.
* @height: Grid height.
*/
void free_grid(int **grid, int height)
{
int index;
for (index = 0; index < height; index++)
free(grid[index]);
free(grid);
}
