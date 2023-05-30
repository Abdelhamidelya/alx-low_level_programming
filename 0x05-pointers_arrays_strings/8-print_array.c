#include "main.h"

/**
*print_array - function to print an array of numbers
*
*@a: the numbers to print
*
*@n: array length
*
*i: int to count the length of the array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}
