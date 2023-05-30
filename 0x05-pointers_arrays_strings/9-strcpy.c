#include "main.h"
/**
*_strlen - function to count the lenght of a string
*
*@s: the string to count
*
*lenght: int to count to the end of line
*
*Return: the string length
*/
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
	length++;
	}
	return (length);
}
/**
*_strcpy - function to copy a string
*
*@dest: copied string
*
*@src: source of the string
*
*count: int to print the string to dest
*
*Return: the copied string
*/
char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; count <= _strlen(src); count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
