#include "main.h"

/**
* *_strcpy - copies string pointed to by src
* @dest: string in question
* @src: string to be copied
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int v = -1;

	do {
		v++;
		dest[v] = src[v];
	} while (src[v] != '\0');

	return (dest);
}
