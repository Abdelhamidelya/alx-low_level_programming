#include "main.h"
/**
*print_numbers- function to print all numbers except 2 and 4
*
*numbers: string contains numbers except 2 and 4
*
*count: int to count to the end of line
*
*/
void print_numbers(void)
{
	char *numbers;
	int count;

	numbers = "1356789";
	count = 0;

	while (numbers[count] != '\0')
	{
	putchar(numbers[count]);
	count++;
	}
}
