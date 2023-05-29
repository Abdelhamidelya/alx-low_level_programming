#include "main.h"
/**
*_strlen - function to count the lenght of a string
*
*@s: the string to count
*
*lenght: int to count to the end of line
*
*Return: the string length
*/
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
	length++;
	}
	return (length);
}
/**
*print_rev - function to print a string in reverse
*
*@s: string to be reversed
*
*rev: int to print string in rev
*/
void print_rev(char *s)
{
	int rev;

	for (rev = _strlen(s) - 1; rev >= 0; rev--)
	{
		_putchar(*(s + rev));
	}
	_putchar('\n');
}
