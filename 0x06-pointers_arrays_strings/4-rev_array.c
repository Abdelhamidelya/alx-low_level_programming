#include "main.h"

/**
*reverse_array - function to reverse the print order of an array
*
*@a: array to be reversed
*
*@n: elements of the array
*
*
*/

void reverse_array(int *a, int n)
{
	int index[n];
	int i;

	for (i = 0; i < n; i++)
	{
	index[n - 1 - i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
	a[i] = index[i];
	}
}
