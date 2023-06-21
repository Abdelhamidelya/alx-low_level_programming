#include "function_pointers.h"

/**
*print_name - function to Print a name
*
*@name: name to print
*
*@f: function pointer to use
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
