#include "main.h"

/**
* _strspn - prints the length of a prefix substring
* @s: the first string
* @accept: the second string
* Return: amount of bytes of the first string
* containing only bytes from the second string
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int g = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				g++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (g);
		}
		s++;
	}
	return (g);
}
