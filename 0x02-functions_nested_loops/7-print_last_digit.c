#include "main.h"
#include <stdlib.h>
/**
* print_last_digit - function to print the last digit of a given number
*
*@n: the number to print it's last digit
*
*abs: calculate the abs value of an int (for negative numbers)
*
*Return: the last digit
*/
int print_last_digit(int n)
{
	_putchar('0' + abs(n % 10));
	return (abs(n % 10));
}
