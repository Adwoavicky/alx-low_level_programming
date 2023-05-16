#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates two string
* @s1: first string
* @s2: second string
* Return: the content of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int g, h;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	g = 0;
	while (s1[g] != '\0')
		g++;

	h = 0;
	while (s2[h] != '\0')
		h++;

	cat = malloc(sizeof(char) * (g + h + 1));

	if (cat == NULL)
	{
		return (NULL);
	}

	g = 0;
	while (s1[g] != '\0')
	{
		cat[g] = s1[g];
		g++;
	}

	h = 0;
	while (s2[h] != '\0')
	{
		cat[g] = s2[h];
		g++, h++;
	}

	cat[g] = '\0';
	return (cat);
}
