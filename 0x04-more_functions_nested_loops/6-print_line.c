#include "main.h"
/**
*print_line - function to print 'n' lines
*
*@n: line lenght
*
*count: int to print the line
*/
void print_line(int n)
{
	int count;

	for (count = 1 ; count <= n ; count++)
	{
		if (count <= 0)
		{
		_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
