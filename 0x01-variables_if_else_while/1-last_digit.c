#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main- program to output the las t digit of "n"
 *
 *
 *n: the number to print it's last digit
 *
 *
 *Return: 0 success
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 >= 6)
	{
		printf("Last digit of %d", n);
		printf(" is %d and is greater than 5", n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is 0 and is 0", n);
	}
	else
	{
		printf("Last digit of %di", n);
		printf(" is %d and is less than 6 and not 0", n % 10);
	}
	printf("\n");
	return (0);
}
