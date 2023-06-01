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
	int low;
	int high;
	int temp;

	for (low = 0, high = n - 1; low < high; low++, high--)
	{
	temp = a[low];
	a[low] = a[high];
	a[high] = temp;
	}
}
