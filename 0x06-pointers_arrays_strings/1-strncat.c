#include "main.h"

/**
* _strncat - prints the concatenates two strings
* @dest: resulting string pointer
* @src: initial string pointer
* @n: number of bytes
* Return: pointer to the resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int string_length, p;

	string_length = 0;
	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	p = 0;
	while (p < n && src[p] != '\0')
	{
		dest[string_length] = src[p];
		string_length++;
		p++;
	}
	dest[string_length] = '\0';
	return (dest);
}
