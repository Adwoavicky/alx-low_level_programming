#include "main.h"

/**
* swap_int - swap the value of two integers
* @a: swaps and stores address of b
* @b: swaps and stores address of a
* Return: void
*/

void swap_int(int *a, int *b)
{
	int swap = *a;
		*a = *b;
		*b = swap;
}
