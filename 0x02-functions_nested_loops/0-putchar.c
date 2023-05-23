#include <stdio.h>
/**
* main- program to print "_putchar"
*
*put: char with the value "_putchar"
*
*count: int with the value starting from 0
*
*Return: 0 success
*/
int main(void)
{
	char *put;
	int count;

	put = "_putchar";
	count = 0;
	while (put[count] != '\0')
		{
		putchar(put[count]);
		count++;
		}
	putchar('\n');
	return (0);
}
