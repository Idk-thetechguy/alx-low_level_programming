#include <stdio.h>

/**
 * main - Entry point
 * prints single digit of base 10 starting from 0
 *
 * Return: 0 on Success
 */

int main(void)
{
int num = 0;

while (num <= 9)
{
printf("%d", num);
num++;
}
printf("\n");
return (0);
}
