#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: the pointer to convert
* Return: an integer
*/

int _atoi(char *s)
{
	int b = 0;
	unsigned int p = 0;
	int e = 1;
	int d = 0;

	while (s[b])
	{
	if (s[b] == 45)
	{
	e *= -1;
	}
	while (s[b] >= 48 && s[b] <= 57)
	{
	d = 1;
	p = (p * 10) + (s[b] - '0');
	b++;
	}
	if (d == 1)
	{
	break;
	}
	b++;
	}
	p *= e;
	return (p);
}
