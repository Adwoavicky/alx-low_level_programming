#include "main.h"
#include <stdio.h>

/**
* print_buffer - print a buffer
* @b: buffer to be printed
* @size: size of the buffer in bytes
* Return: always 0
*/

void print_buffer(char *b, int size)
{
	int k, l, m;

	k = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		l = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);
		for (m = 0; m < 10; m++)
		{
			if (m < l)
				printf("%02x", *(b + k + m));
			else
				printf(" ");
			if (m % 2)
			{
				printf(" ");
			}
		}
		for (m = 0; m < l; m++)
		{
			int v = *(b + k + m);

			if (v < 32 || v > 132)
			{
			v = '.';
			}
			printf("%c", v);
		}
		printf("\n");
		k += 10;
	}
}
