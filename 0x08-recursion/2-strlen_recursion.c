#include <stdio.h>

/**
*_strlen_recursion - function to calculate string length using recursion
*
*@s: string to get it's length
*
*Return: string length
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
