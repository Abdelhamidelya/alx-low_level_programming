#include <stdio.h>
/**
 *main- entry point to the program
 *
 *text: line to be printed
 *
 *print: chars counter
 *
 *Return: set to 1 success
 */
int main(void)
{
	char *text;
	int print;

	text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	print = 0;

	while (text[print] != '\0')
	{
		putchar(text[print]);
		print++;
	}
	return (1);
}
