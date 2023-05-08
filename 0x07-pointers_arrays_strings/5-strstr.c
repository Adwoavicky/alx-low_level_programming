#include "main.h"

/**
* _strstr - function that identifies a substring
* @haystack: the subsequent string
* @needle: the initial string
* Return: a pointer to the beginning substring
* NULL if such string is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int h;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		h = 0;

		if (haystack[h] == needle[h])
		{
			do {
				if (needle[h + 1] == '\0')
					return (haystack);
				h++;

			} while (haystack[h] == needle[h]);
		}
		haystack++;
	}
	return ('\0');
}
