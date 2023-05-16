#include <stdlib.h>
#include "main.h"

/**
* find_word - prints out the number of words in a string
* @s: string to look through
* Return: number of words found
*/

int find_word(char *s)
{
	int raise, star, ride;

	raise = 0;
	ride = 0;

	for (star = 0; s[star] != '\0'; star++)
	{
		if (s[star] == ' ')
			raise = 0;
		else if (raise == 0)
		{
			raise = 1;
			ride++;
		}
	}

	return (ride);
}

/**
* **strtow - Function that divides a string into two words
* @str: string to be divided
* Return: pointer to an arry of string or NULL(Error)
*/

char **strtow(char *str)
{
	char **throw, *bow;
	int a, c = 0, d = 0, look, g = 0, w, t;

	while (*(str + d))
		d++;
	look = find_word(str);
	if (look == 0)
		return (NULL);

	throw = (char **) malloc(sizeof(char *) * (look + 1));
	if (throw == NULL)
		return (NULL);

	for (a = 0; a < d; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (g)
			{
				t = a;
				bow = (char *) malloc(sizeof(char) * (g + 1));
				if (bow == NULL)
					return (NULL);
				while (w < t)
					*bow++ = str[w++];
				*bow = '\0';
				throw[c] = bow - g;
				c++;
				g = 0;
			}
		}
		else if (g++ == 0)
			w = a;
	}

	throw[c] = NULL;

	return (throw);
}
