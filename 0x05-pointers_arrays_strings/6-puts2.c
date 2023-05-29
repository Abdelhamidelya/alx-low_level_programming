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
*puts2 - a function that prints every other character of a string
*
*@str: string to print from
*
*count: int to print every other char
*
*/
void puts2(char *str)
{
	int count;

for (count = 0 ; count < _strlen(str) ; count++)
	{
	if (count % 2 == 0)
		{
		_putchar(str[count]);
		}
	}
	_putchar('\n');
}
