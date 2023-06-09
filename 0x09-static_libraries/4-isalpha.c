#include "main.h"
/**
*_isalpha- function to check if the given letter is an alphabet
*
*
*@c: the letter to check
*
*Return: 1 if c is alpha 0 if not
*
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
