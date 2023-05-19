#include <stdio.h>
/**
 *main- program to print numbers
 *
 *numb: char with value '0'
 *
 *Return: 0 success
 */
int main(void)
{
	char numb;

	numb = '0';
	while (numb <= '9')
	{
		putchar(numb);
		numb++;
	}
	putchar('\n');
	return (0);
}

