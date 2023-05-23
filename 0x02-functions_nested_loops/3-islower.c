#include "main.h"
/**
*_islower- function to check if the given letter is lowercase
*
*
*@c: the letter to check
*
*Return: 1 if c is lower 0 if not
*
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
