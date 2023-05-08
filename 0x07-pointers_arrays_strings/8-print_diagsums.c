#include "main.h"
#include <stdio.h>

/**
* print_diagsums - display a square matrix of two diagonal integers
* @a: the first integer
* @size: the second integer
* Return: always 0
*/

void print_diagsums(int *a, int size)
{
	int p, add = 0, add1 = 0;

	for (p = 0; p < size; p++)
	{
		add += a[p];
		a += size;
	}

	a -= size;

	for (p = 0; p < size; p++)
	{
		add1 += a[p];
		a -= size;
	}

	printf("%d, %d\n", add, add1);
}
