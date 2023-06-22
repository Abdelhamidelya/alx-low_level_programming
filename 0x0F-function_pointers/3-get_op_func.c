#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
*get_op_func - function to check for the correct operation
*
*@s: selected operator
*
*Return: correct opeartion function pointer
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 4)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
