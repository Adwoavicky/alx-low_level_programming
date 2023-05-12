 #include "main.h"
/**
 * _isupper - assess for uppercase character
 * @c: character to be assessed
 * Return: 1 if uppercase and 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
