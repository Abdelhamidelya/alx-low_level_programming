#include "function_pointers.h"

/**
*array_iterator - function that executes a function given as a parameter
*
*@array: array to check
*
*@size: array size
*
*@action: function pointer
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i+1)
		action(array[i]);
}
