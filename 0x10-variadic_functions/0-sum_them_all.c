#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - function that returns the sum of all its parameters
*
*@n: number of ints to sum
*
*Return: sum of n
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int sum;
	va_list total;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(total, n);
	for (count = 0; count < n; count++)
		sum += va_arg(total, int);
	va_end(total);
	return (sum);
}
