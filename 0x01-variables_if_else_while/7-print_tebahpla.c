#include <stdio.h>
/**
 *main- program to print alphabets in reverse
 *
 *alpha: char with value 'a'
 *
 *Return: 0 success
 */
int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}

