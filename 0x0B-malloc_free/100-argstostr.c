#include <stdlib.h>
#include "main.h"

/**
* argstostr - concatenates aall arguments
* @ac: variable
* @av: the doulble pointer array
* Return: NULL if ac and av is 0
*/

char *argstostr(int ac, char **av)
{
	char *str;
	int m, s, t = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (s = 0; av[m][s]; s++)
			k++;
	}
	k += ac;

	str = malloc(sizeof(char) * k + 1);

	if (str == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (s = 0; av[m][s]; s++)
		{
			str[t] = av[m][s];
			t++;
		}
		if (str[t] == '\0')
		{
			str[t++] = '\n';
		}
	}
	return (str);
}
