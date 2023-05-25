#include "main.h"
/**
*_isdigit- function to check if n is a number
*
*
*@c: value to check
*
*Return: 1 if n is a number 0 if not
*
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
