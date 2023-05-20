#include <stdio.h>
/**
 *main- program to print the combo of 2 by 4 numbers
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

	for (numbA = 0 ; numbA <= 98 ; numbA++)
	for (numbB = 1 ; numbB <= 99 ; numbB++)
	{
	putchar('0' + numbA / 10);
	putchar('0' + numbA % 10);
	putchar(' ');
	putchar('0' + numbB / 10);
	putchar('0' + numbB % 10);
		if (numbA == 98 && numbB == 99)
		{
			break;
		}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);

}
