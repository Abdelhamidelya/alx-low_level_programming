#include "main.h"

/**
*root_calc - calculate the square root of n
*
*@n: number to fint the square root for
*
*@root: clacs root of n starting from 0
*
*Return: the square root of n
*/
int root_calc(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (root_calc(n, root + 1));
}

/**
* _sqrt_recursion - function to find natural square root of n
*
*@n: number to find it's Natural square root
*
*Return: natural square root of n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (root_calc(n, 0));
}
