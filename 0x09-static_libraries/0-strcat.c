#include "main.h"

/**
* _strcat - prints the concatenates of two string
* @dest: resulting  string pointer
* @src: initial string pointer
* Return: pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int string_length, p;

	string_length = 0;
	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	for (p = 0; src[p] != '\0'; p++, string_length++)
	{
		dest[string_length] = src[p];
	}
	dest[string_length] = '\0';
	return (dest);
}
