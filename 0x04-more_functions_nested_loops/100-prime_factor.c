#include <stdio.h>

/**
* main - prints the largest prime factor of number 612852475143
* Return: always sucess
*/

int main(void)
{
	unsigned long int a, f = 612852475143;

	for (a = 3; a < 782849; a = a + 2)
	{
		while ((f % a == 0) && (f != a))
			f = f / a;
	}
	printf("%lu\n", f);
	return (0);
}
