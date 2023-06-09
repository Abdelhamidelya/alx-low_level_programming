#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*_isdigit - function to check if entered args are all numbers
*
*@s: args to check
*
*Return: 1 if true 0 if not
*/

int _isdigit(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
*main - program that adds argv[] input and print the resutle of the addition
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

	result = 0;
	if (argc > 1)
	{
		for (count = 1 ; count < argc; count++)
		{
			if (_isdigit(argv[count]) && argc > 2)
			{
				result = result + atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
		return (0);
	}
	else
		{
			printf("0\n");
		}
	return (0);
}
