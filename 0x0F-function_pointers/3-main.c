#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
*main - main function
*
*@argc: argument count
*
*@argv: argument victor
*
*Return: 0 success
*/

int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (func == NULL || argv[2][1] != 0)
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", func(a, b));
	return (0);
}
