#include "main.h"
/**
* times_table - function to print time table
*
* a: number of rows
*
* b: number of colloums
*
*
*/
void times_table(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			if (b == 0)
			{
				_putchar('0');
			}
		else if (a * b > 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + a * b / 10);
			_putchar('0' + a * b % 10);
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + a * b);
		}
		}
	_putchar('\n');
	}
}
