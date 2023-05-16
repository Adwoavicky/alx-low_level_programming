#include "main.h"
#include <stdlib.h>

/**
* str_concat - a function that concatenates two strings
* @s1: first string
* @s2: second string
* Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int g, h;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	g = h = 0;
	while (s1[g] != '\0')
		g++;
	while (s2[h] != '\0')
		h++;

	concat = malloc(sizeof(char) * (g + h + 1));

	if (concat == NULL)
		return (NULL);

	g = h = 0;
	while (s1[g] != '\0')
	{
		concat[g] = s1[g];
		g++;
	}
	while (s2[h] != '\0')
	{
		concat[g] = s2[h];
		g++, h++;
	}

	concat[g] = '\0';
	return (concat);
}

