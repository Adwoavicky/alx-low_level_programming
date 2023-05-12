#include "main.h"

/**
* _strchr - identifies a character in a string
* @s: first string
* @c: second string
* Return: pointer to the first occurance if c is found
* NULL if the c is not found
*/

char *_strchr(char *s, char c)
{
	int f;

	for (f = 0; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
			return (s + f);
	}
	return ('\0');
}
