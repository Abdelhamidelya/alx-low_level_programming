#include <stdio.h>
/**
 *main- program to print the combo of 3 numbers
 *
 *numbA: first number
 *
 *numbB: second number
 *
 *numbC: third number
 *
 *Return: 0 success
 */
int main(void)
{
	int numbA;
	int numbB;
	int numbC;

	numbA = 0;
	numbB = 1;
	numbC = 2;
	for (numbA = 0 ; numbA <= 7 ; numbA++)
	for (numbB = 1 ; numbB <= 8 ; numbB++)
	for (numbC = 2 ; numbC <= 9 ; numbC++)
	if (numbA < numbB && numbB < numbC && numbA < numbC)
	{
		putchar('0' + numbA);
		putchar('0' + numbB);
		putchar('0' + numbC % 10);
		if (numbA != 7)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
