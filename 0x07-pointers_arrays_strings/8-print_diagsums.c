#include "main.h"

/**
*print_diagsums -funtion to print the sum of two diagonals integers
*
*@a: array to clac from
*
*@size: array size
*
*/

void print_diagsums(int *a, int size)
{
	int count;
	int num1 = 0;
	int num2 = 0;

	for (count = 0; count < size; count++)
	{
		num1 += a[(count * size) + count];
		num2 += a[(size - 1) + ((size - 1) * count)];
	}
	printf("%d, %d\n", num1, num2);
}
