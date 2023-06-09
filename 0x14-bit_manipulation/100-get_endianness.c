#include "main.h"

/**
* get_endianness - access the endianness
* Return: 0 if big endian and 1 if small endian
*/

int get_endianness(void)
{
	unsigned int q = 1;
	char *s = (char *) &q;

	if (*s)
		return (1);
	else
		return (0);
}
