#include "main.h"
/**
*print_most_numbers- function to print all numbers except 2 and 4
*
*numbers: string contains numbers except 2 and 4
*
*count: int to count to the end of line
*
*/
void print_most_numbers(void)
{
	char *numbers;
	int count;

	numbers = "01356789\n";
	count = 0;

	while (numbers[count] != '\0')
	{
		_putchar(numbers[count]);
		count++;
	}
}
