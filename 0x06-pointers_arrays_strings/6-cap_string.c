#include "main.h"
/**
*specialchar - function to check for special chars
*
*@c: chars to be checked
*
*Return: 1 if true 0 if not
*/
int specialchar(char c)
{
	int count;
	char special[13] = {'\n', '\t', ' ', '.', ',', ';',
	',', '!', '?', '(', ')', '{', '}'};

	for (count = 0; count < 13; count++)
	{
		if (special[count] == c)
			return (1);
	}
	return (0);
}
/**
*cap_string - capitalizes first letter of every word
*
*@s: the string to check
*
* Return: the string with capiralized words
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (specialchar(s[i]))
			continue;
		if (s[i] >= 'a' && s[i] <= 'z' && (specialchar(s[i - 1]) || i == 0))
			s[i] = s[i] - 32;

	}
	return (s);
}
