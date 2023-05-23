#include "main.h"
/**
* print_alphabet_x10 - funtion to print alphabet 10 times
*
*alpha: char with the value 'a'
*
*
*lines: int to print 10 lines
*/
void print_alphabet_x10(void)
{
	char alpha;
	int lines;

	alpha = 'a';
	lines = 0;
	for (lines = 0 ; lines <= 9 ; lines++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		_putchar(alpha);
		_putchar('\n');
	}
}
