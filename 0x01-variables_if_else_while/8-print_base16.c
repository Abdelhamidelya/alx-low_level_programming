#include <stdio.h>
/**
 *main- program to print base 16 in lowercase
 *
 *alpha: char with value 'a'
 *
 *numb: int with value '0'
 *
 *Return: 0 success
 */
int main(void)
{
	char alpha;
	int numb;

	alpha = 'a';
	numb = 0;
	while (alpha <= 'f')
	{
		while (numb <= 9)
		{
			putchar(numb + '0');
			numb++;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}

