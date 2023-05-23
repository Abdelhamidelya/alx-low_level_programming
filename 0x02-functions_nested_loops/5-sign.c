#include "main.h"
/**
*print_sign- function to check if the given number is greater or less than zero
*
*@n: the number to check
*
*
*Return: return + if n is > 0 or/ 0 if n == 0 or/ - if n is < 0
*
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0' + 0);
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
