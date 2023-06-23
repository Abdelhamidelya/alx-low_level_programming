#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*print_strings - function that prints strings
*
*@separator: seprating char
*
*@n: n of passed arguments
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	char *args;
	va_list str;

	va_start(str, n);
	for (count = 0; count < n; count++)
	{
		args = va_arg(str, char *);

		if (count > 0 && separator != NULL)
			printf("%s", separator);
		if (args == NULL)
			printf("(nil)");
		else
			printf("%s", args);
	}
	va_end(str);
	printf("\n");
}
