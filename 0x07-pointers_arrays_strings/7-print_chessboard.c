#include "main.h"
/**
* print_chessboard - Prints a given 2D array as a chessboard
* @board: 2D array to be printed
* Return: void
*/
essboard(char (*a)[8])
{
int i;
int j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
_putchar(a[i][j]);
_putchar('\n');
}
}
