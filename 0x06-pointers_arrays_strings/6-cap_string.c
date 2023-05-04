#include "main.h"

/**
* cap_string - prints all words of a string capitalized
* @p: words to capitalized
* Return: always void
*/

char *cap_string(char *p)
{
	int k;

	k = 0;
	while (p[k] != '\0')
	{
	if (p[k] == ' ' || p[k] == '\t' || p[k] == '\n' || p[k] == 44 || p[k] == 59 || p[k] == 46 || p[k] == 33 || p[k] == 63 || p[k] == 34 || p[k] == 40 || p[k] == 41 || p[k] == 123 || p[k] == 125)
	{
		if (p[k + 1] >= 97 && p[k + 1] <= 122)
		{
			p[k + 1] = p[k + 1] - 32;
		}
	}
	k++;
	}
	return (p);
}
