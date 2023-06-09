#include "main.h"

/**
* binary_to_uint - changes a binary number to an unsigned int
* @b: a string of 0 and 1 chars
* Return: the converted number or 0 if otherwise
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int v = 0;

	while (b[v] == '0' || b[v] == '1')
	{
		uint = (uint * 2) + (b[v] - '0');
		v++;
	}

	if (b[v] != '\0')
		return (0);
	return (uint);
}
