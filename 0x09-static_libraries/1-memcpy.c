#include "main.h"

/**
* _memcpy - prints the duplicates a memory area
* @dest: area for duplicate memory
* @src: memory area source
* @n: number of byte
* Return: to the duplicate area dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		dest[p] = src[p];
		p++;
	}
	return (dest);
}
