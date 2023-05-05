#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* prints the last digit of the variable stored in n
*
* Return: 0 on success
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digitvof n is %d and is greater than 5\n", n);
}
else
if (n == 0)
{
printf("Last digit of n is %d and is 0\n", n);
}
else
if (n <= 0)
{
printf("Last digit of n is %d and is greater than 6 and not 0\n", n);
}
return (0);
}
