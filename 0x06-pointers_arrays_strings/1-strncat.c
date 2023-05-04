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
	for (p = 0; p < n && src[p] != '\0'; p++)
	{
	string_length++;
		dest[string_length] = src[p];
	}
	dest[string_length] = '\0';
	return (dest);
}
