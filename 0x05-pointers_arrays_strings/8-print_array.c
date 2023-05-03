#include <stdio.h>
/**
* print_array - prints n elementa of an array of integers
* @a: this is the input array
* @n: this is the length of the array
* Return: void
*/

void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		printf("%d", a[array]);
		if (array != (n - 1))
		{
			printf(",");
		}
	}
	putchar('\n');
}
