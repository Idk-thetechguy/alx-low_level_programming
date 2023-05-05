#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 * checks if variable n is positive or negative
 *
 * Return: 0 if successful
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf(" is positive \n");
}
else
if (n == 0)
{
printf(" is zero\n");
}
else
if (n < 0)
{
printf(" is negative\n");
}
return (0);
}
