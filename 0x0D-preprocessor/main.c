#include<stdio.h>

/**
*main - program that prints the name of the file it was compiled from
*
*Retrun: 0 success
*/
int main(void)
{
	printf("File :%s\n", __FILE__ );
	return 0;
}