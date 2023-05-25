#include "main.h"
/**
*more_numbers - function to print number from 0 to 14 10times
*
*a: rows to print
*
*b: numbers to print
*
*/
void more_numbers(void)
{
int a;
int b;

for (a = 0 ; a <= 9 ; a++)
	{
	for (b = 0 ; b <= 14 ; b++)
		if (b > 9)
		{
		_putchar('0' + b / 10);
		_putchar('0' + b % 10);
		}
		else
		{
		_putchar('0' + b);
		}
	_putchar('\n');
	}
}
