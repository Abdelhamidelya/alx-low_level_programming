#include "main.h"
/**
* print_square - function to print a square using #
*
*@size: size of the square
*
*count: size of the square
*hash: number of hashes to print
*
*/
void print_square(int size)
{
	int count;
	int hash;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (count = 1 ; count <= size ; count++)
	{
	for (hash = 1 ; hash <= size ; hash++)
	_putchar('#');
	_putchar('\n');
	}
}
