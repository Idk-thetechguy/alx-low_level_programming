#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - frees memory allocated for a 2D array
* @grid: pointer to the 2D array
* @height: height of the 2D array
* This function frees the memory allocated for a 2D array of a given height.
* Return: Nothing
*
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
