 #include "main.h"
/**
* print_times_table - function to print 'n' times table function
*
* @n: number to give it's time table
*
*/
void print_times_table(int n)
{
	int a;
	int b;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
				{
					_putchar('0');
				} else if (a * b <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + a * b);
				} else if (a * b > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (a * b / 100));
					_putchar('0' + ((a * b / 10) % 10));
					_putchar('0' + (a * b % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (a * b / 10));
					_putchar('0' + (a * b % 10));
				}
			}
			_putchar('\n');
		}
	}
}
