#include <stdio.h>
/**
 *main- program to print the combo of 2 numbers
 *
 *numbA: first number
 *
 *numbB: second number
 *
 *Return: 0 success
 */
int main(void)
{
	int numbA;
	int numbB;

	numbA = 0;
	numbB = 1;
	for (numbA = 0 ; numbA <= 8 ; numbA++)
	for (numbB = 1 ; numbB <= 9 ; numbB++)
	if (numbA < numbB)
	{
		putchar('0' + numbA);
		putchar('0' + numbB % 10);
		if (numbA != 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
