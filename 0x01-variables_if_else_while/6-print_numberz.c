#include <stdio.h>
/**
 *main- program to print numbers using int data type
 *
 *numb: char with value '0'
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
	}
	putchar('\n');
	return (0);
}

