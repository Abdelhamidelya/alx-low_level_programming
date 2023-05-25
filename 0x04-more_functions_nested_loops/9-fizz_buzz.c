#include <stdio.h>
/**
* main - print from 1 to 300 with multiplies of 3&5 replaced with FizzBuzz
*
*
*Return: 0 success
*/
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			if (count % 3 == 0)
			{
				printf("Fizz");
			}
			if (count % 5 == 0)
			{
				printf("Buzz");
			}
		} else
		{
			printf("%d", count);
		}
		if (count != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
