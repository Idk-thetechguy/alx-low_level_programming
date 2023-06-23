#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - Calculates the total value derived from adding together all the parameters.
* @n: The quantity of parameters supplied to the function.
* @...: An indeterminate quantity of parameters to compute the total of.
*
* Return: If n == 0 - 0.
*         Otherwise - The total of every parameter.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int index, sum = 0;
va_start(nums, n);
for (index = 0; index < n; index++)
sum += va_arg(nums, int);
va_end(nums);
return (sum);
}
