#include <stdio.h>

/**
*main - function to print the number of passed args
*
*@argc: argument count
*
*@argv: argument victor
*
*Return: 0 success
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
