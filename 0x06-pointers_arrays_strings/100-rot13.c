#include "main.h"
/**
*rot13 - function to encode a text using rot13 cypher
*
*@s: text to encode
*
*Return: encoded text
*/
char *rot13(char *s)
{
	char alpha[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rotalpha[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rotalpha[j];
				break;
			}
		}
	}
	return (s);
}
