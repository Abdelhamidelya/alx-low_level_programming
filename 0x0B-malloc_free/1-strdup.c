#include "main.h"
#include <string.h>

/**
*_strdup -function that returns a pointer to a newly allocated space in memory,
*
*@str: the string given as a parameter.
*
* Return: New string
*/

char *_strdup(char *str)
{
	char *nstr;
	int count;

	count = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	nstr = malloc(sizeof(char) * strlen(str) + 1);
	while (*str)
	{
		nstr[count] = *str;
		count++;
		str++;
	}
	return (nstr);
}
