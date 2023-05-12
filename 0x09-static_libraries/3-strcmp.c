#include "main.h"

/**
* _strcmp - prints the comparison of two strings
* @s1: first string
* @s2: second string
* Return: always 0
*/

int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		a++;
	}
	b = s1[a] - s2[a];
	return (b);
}
