#include "main.h"

/**
* _strpbrk - function that looks through a string for a byte
* @s: first string to look through
* @accept: second string
* Return: a pointer to s matching any byte in accepts
* NULL if no byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int f;

	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
			if (*s == accept[f])
				return (s);
		}
		s++;
	}
	return ('\0');
}
