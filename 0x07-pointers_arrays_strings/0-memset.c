#include "main.h"

/**
* _memset - function that fill a memory with a constant byte
* @s: pointer that holds the memory area
* @n: first byte needed to fill the memory space
* @b: constant byte
* Return: to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d = 0;

	for (; n > 0; d++)
	{
		s[d] = b;
	n--;
	}
	return (s);
}
