#include <stdio.h>

/**
 * main - function to calculate the longest prime of 612852475143
 *
 * Return: 0 success
 */
int main(void)
{
	int calc;
	long int prime = 612852475143;

	for (calc = 2 ; calc < prime ; calc++)
	{
		if (prime % calc == 0)
		{
			prime = prime / calc;
		}
	}
	printf("%ld\n", prime);

	return (0);
}
