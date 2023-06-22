#include <stdio.h>
#include "3-calc.h"

/**
*op_add - addition function
*@a: first number
*@b: second number
*Return: sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - subtract function
*@a: first number
*@b: seconf number
*Return: a - b difference
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiplication function
*@a: first number
*@b: second number
*Return: multiplication of a on b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - division function
*@a: first number
*@b: seconf number
*Return: a divided by b
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - modulo function
*@a: first number
*@b: second number
*Return: modulo of a on b
*/

int op_mod(int a, int b)
{
	return (a % b);
}
