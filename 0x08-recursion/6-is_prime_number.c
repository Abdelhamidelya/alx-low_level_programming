#include "main.h"

/**
*prime - function to calculate prime
*
*@n: number to be checked
*
*@calc: checks for prime
*
*Return: 1 if n is prime or 0 if not
*/

int prime(int n, int calc)
{
	if (n == calc)
	{
		return (1);
	}
	if (n % calc == 0)
	{
		return (0);
	}
	return (prime(n, calc + 1));
}

/**
*is_prime_number - checks if n is prime
*
*@n: number to check
*
*Return: 1 if n is prime or 0 if not
*/

int is_prime_number(int n)
{
	int calc;

	calc = 2;
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime(n, calc));
}
