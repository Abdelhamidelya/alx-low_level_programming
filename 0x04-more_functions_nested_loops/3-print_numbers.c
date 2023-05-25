#include "main.h"
/**
*print_numbers- function to print numbers from 0 to 9
*
*numb: int to count and print from 0 to 9
*
*/
void print_numbers(void)
{
	int numb;

	numb = 0;
	while (numb <= 9)
	{
	_putchar('0' + numb);
	numb++;
	}
	_putchar ('\n');
}
