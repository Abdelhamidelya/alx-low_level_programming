#include "main.h"

/**
*factorial - function to calculate the fcatorial of n using recursion
*
*@n: number of fact
*
*Return: the factorail of n
*/

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
