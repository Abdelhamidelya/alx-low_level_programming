#include "main.h"
/**
*leet - function to replace aAeEoOtTlL with 43071
*
*@s: string to be changed
*
*Return: leet string
*/
char *leet(char *s)
{
	char leet[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (s[i] == leet[j])
			{
				s[i] = leet[j + 1];
				break;
			}
		}
	}
	return (s);
}
