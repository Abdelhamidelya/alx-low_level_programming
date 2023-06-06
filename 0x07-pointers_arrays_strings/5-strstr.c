#include "main.h"

/**
*_strstr - function that locates a substring
*
*@haystack: string to locate from
*
*@needle: substring to locate
*
*Return: located string
*/

char *_strstr(char *haystack, char *needle)
{
	int countH;
	int countN;

	if (needle[0] == '\0')
		return (haystack);

	for (countH = 0; haystack[countH] != '\0'; countH++)
	{
		if (haystack[countH] == needle[0])
		{
			for (countN = 0; needle[countN] != '\0'; countN++)
			{
				if (haystack[countN + countH] != needle[countN])
				break;
			}
			if (needle[countN] == '\0')
			return (haystack + countH);
		}

	}
	return ('\0');
}
