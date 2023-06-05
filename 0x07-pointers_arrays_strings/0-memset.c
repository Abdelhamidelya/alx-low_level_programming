#include "main.h"

/**
*_memset - function to fill the memory block with a consatnt byte
*
*@s: pointer to that memory to be filled
*
*@b: the constant byte
*
*@n: the number of bytes in the memory block
*
*Return: the fille memory block
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p;

	p = s;
	while (n > 0)
	{
	*p = b;
	p++;
	n--;
	}
	return (s);
}
