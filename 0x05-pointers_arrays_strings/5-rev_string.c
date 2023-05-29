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
*rev_string - function to print a string in reverse
*
*@s: string to be reversed
*
*count: int to count strlen/2
*
*temp: char to temporarily store the reversed string
*/
void rev_string(char *s)
{
	int count;
	char temp;

	for (count = 0; count < _strlen(s) / 2; count++)
	{
		temp = s[count];
		s[count] = s[_strlen(s) - count - 1];
		s[_strlen(s) - count - 1] = temp;
	}
}
