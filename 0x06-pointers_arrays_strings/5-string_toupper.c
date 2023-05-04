#include "main.h"

/**
* string_toupper - prints lowercase letters to uppercase
* @v: string to be printed
* Return: always void
*/

char *string_toupper(char *v)
{
	int c;

	c = 0;
	while (v[c] != '\0')
	{
	if (v[c] >= 97 && v[c] <= 122)
	{
		v[c] = v[c] - 32;
	}
	c++;
	}
	return(v);
}
