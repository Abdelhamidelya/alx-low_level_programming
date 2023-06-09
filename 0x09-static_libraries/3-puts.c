#include "main.h"

/**
*_puts - functionto print a string
*
*@str: the string to print
*
*length: int to count the length of the string
*
*
*/
void _puts(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
