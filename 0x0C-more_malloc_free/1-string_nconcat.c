#include <stdlib.h>
#include "main.h"

/**
* *string_nconcat - a function that concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes
* Return: pointer to the resulting string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int k = 0, m = 0, l = 0, p = 0;

	while (s1 && s1[l])
		l++;
	while (s2 && s2[p])
		p++;
	if (n < p)
		s = malloc(sizeof(char) * (l + n + 1));
	else
		s = malloc(sizeof(char) * (l + p + 1));
	if (!s)
		return (NULL);
	while (k < l)
	{
		s[k] = s1[k];
		k++;
	}
	while (n < p && k < (l + n))
		s[k++] = s2[m++];
	while (n >= p && k < (l + p))
		s[k++] = s2[m++];
	s[k] = '\0';
	return (s);
}
