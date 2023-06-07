#include "main.h"

/**
*_pow_recursion - function to calculate power of x on y
*
*@x: first number
*
*@y: second number
*
*Return: power of x on y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
