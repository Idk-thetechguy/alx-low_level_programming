#include
#include
#include
*print_grid - prints a grid of
* @grid : the address of the two dimensional
* @width : width of the
* @height : height of the
* Return :
void print_grid(int **grid, int width, int
int
int
h =
while (h <
w =
while (w <
printf("%d ",
}
*main - check the code for ALX School
* Return : Always
int
int
grid = alloc_grid(6,
if (grid ==
return
print_grid(grid, 6,
grid[0][3] =
grid[3][4] =
print_grid(grid, 6,
free_grid(grid,
return
