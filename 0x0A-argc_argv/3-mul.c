#include <stdio.h>
#include <stdlib.h>
/**
*main - program that prints argv[1] mutltiplied by argv[2]
*
*@argc: argument count
*
*@argv: argument victor
*
*Return: 0 if success or 1 if Error
*/
int main(int argc, char *argv[])
{
	int count;
	int result;

	result = 1;
	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}
	for (count = 1 ; count < argc; count++)
	{
	result = result * atoi(argv[count]);
	}
	printf("%d\n", result);
	return (0);
}
