#include <stdio.h>

/**
*main - program that prints all arguments it receives
*
*@argc: argument count
*
*@argv: argument victor
*
*Return: command not found
*/
int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
	for (count = 1; count < argc; count++)
		{
		printf("%s\n", argv[count]);
		}
	}
	return (0);
}
