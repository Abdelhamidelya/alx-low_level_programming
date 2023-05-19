#include <stdio.h>
/**
 *main- program to print alphabets in upper case and lower case
 *
 *alpha: char with value 'a'
 *
 *ALPHA: char with value 'A'
 *
 *Return: 0 success
 */
int main(void)
{
	char alpha;
	char ALPHA;

	alpha = 'a';
	ALPHA = 'A';
	while (ALPHA <= 'Z')
	{
		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}

