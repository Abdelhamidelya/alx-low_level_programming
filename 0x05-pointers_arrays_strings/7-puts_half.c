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
*puts_half - function to print half of the string
*
*@str: the string to print from
*
*
*
*/
void puts_half(char *str)
{
	int count;
	int odd = 0;

	if (_strlen(str) % 2 != 0)
	{
		odd += 1;
	}
	for (count = (_strlen(str) + odd) / 2; count < _strlen(str); count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
