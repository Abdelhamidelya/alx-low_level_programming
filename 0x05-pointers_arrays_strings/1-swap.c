#include "main.h"
/**
*swap_int - function to swap the value of two ints
*
*@a: first int
*@b: second int
*
*save: int to save the value of one of the two ints
*/
void swap_int(int *a, int *b)
{
	int save;

	save = *a;
	*a = *b;
	*b = save;
}
