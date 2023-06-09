#include <stdio.h>

/**
*main - function to print the name by which the program is called
*
*@argc: argument count
*
*@argv: argument victor
*
*Return: 0 success
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
