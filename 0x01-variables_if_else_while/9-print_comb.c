#include <stdio.h>
/**
 *main- program to print possible combs of 1 number
 *
 *numb: int with value '0'
 *
 *Return: 0 success
 */
int main(void)
{
	int numb;

	numb = 0;
	while (numb <= 9)
	{
		putchar('0' + numb);
		numb++;
		if (numb <= 9)
		{
			putchar(',');
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

