#include "main.h"

/**
*_memcpy - function to copy memmory
*
*@dest: destination to copt to
*
*@src: source to copy from
*
*@n: n bytes to copy
*
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *copy;
	char *paste;
	unsigned int count;

	copy = dest;
	paste = src;

	for (count = 0 ; count < n ; count++)
	copy[count] = paste[count];
	return (dest);
}
