#include <stdio.h>
/**
 *main- program to print the combo of 4 numbers
 *
 *numbA: first number
 *
 *numbB: second number
 *
 *numbC: third number
 *
 *numbD: forth number
 *
 *Return: 0 success
 */
int main(void)
{
	int numbA;
	int numbB;
	int numbC;
	int numbD;

	numbA = 0;
	numbB = 0;
	numbC = 0;
	numbD = 1;
	for (numbA = 0 ; numbA <= 9 ; numbA++)
	for (numbB = 0 ; numbB <= 8 ; numbB++)
	for (numbC = 0 ; numbC <= 9 ; numbC++)
	for (numbD = 1 ; numbD <= 9 ; numbD++)
	if (numbA + numbB < numbC + numbD && numbA <= numbC)
	{
		putchar('0' + numbA);
		putchar('0' + numbB);
		putchar(' ');
		putchar('0' + numbC);
		putchar('0' + numbD % 10);
		if (numbA == 9 && numbB == 8)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
