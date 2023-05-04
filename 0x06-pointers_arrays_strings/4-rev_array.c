#include "main.h"

/**
* reverse_array - prints the content of a reverse array of integers
* @a: an array of integers
* @n: number of elements to reverse
* Return: always void
*/

void reverse_array(int *a, int n)
{
	int t, m;

	n = n - 1;
	m = 0;
	while (m <= n)
	{
	t = a[m];
	a[m++] = a[n];
	a[n--] = t;
	}
}
