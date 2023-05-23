#include "main.h"
/**
 *jack_bauer- program to print time from 00:00 to 23:59
 *
 *numbA: first number
 *
 *numbB: second number
 *
 */
void jack_bauer(void)
{
	int numbA;
	int numbB;

	for (numbA = 0 ; numbA <= 23 ; numbA++)
	for (numbB = 0 ; numbB <= 59 ; numbB++)
	{
	_putchar('0' + numbA / 10);
	_putchar('0' + numbA % 10);
	_putchar(':');
	_putchar('0' + numbB / 10);
	_putchar('0' + numbB % 10);
	_putchar('\n');
	}
}
