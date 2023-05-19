#include <stdio.h>
/**
 *main- program to print alphabets
 *
 *alpha: char with value 'a'
 *
 *Return: 0 success
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}

