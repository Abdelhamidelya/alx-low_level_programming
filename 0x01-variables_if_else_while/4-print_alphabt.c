#include <stdio.h>
/**
 *main- program to print alphabet without 'e' and 'q'
 *
 *print: index statring from 0 irratitng over alpha
 *
 *alpha: alphabets to be printed
 *
 *Return: 0 success
 */
int main(void)
{
	int print;
	char *alpha;

	print = 0;
	alpha = "abcdfghijklmnoprstuvwxyz";
		while (alpha[print] != '\0')
		{
			putchar(alpha[print]);
			print++;
		}
	putchar('\n');
	return (0);
}
