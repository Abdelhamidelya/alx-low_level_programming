#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*print_numbers - function that prints numbers
*
*@separator: seperating char
*
*@n: passed arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbes;

	va_start(numbes, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(numbes, int));
	}
	va_end(numbes);
	printf("\n");
}
