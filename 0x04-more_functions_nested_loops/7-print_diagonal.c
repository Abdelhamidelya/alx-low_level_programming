#include "main.h"
/**
*print_diagonal - function to print diagonal lines
*
*@n: number of lines to print
*
*count: lines to print
*slash: slashes to print
*
*/
void print_diagonal(int n)
{
	int count;
	int slash;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (count = 0 ; count <= n ; count++)
	{
		for (slash = 0 ; slash <= count ; slash++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
