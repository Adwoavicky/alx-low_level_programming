#include <stdio.h>
/**
* main - prints the sum of multiples of 3 or 5
*Return: always 0
*/

int main(void)
{
	int p, c = 0;

	while (p < 1024)
	{
	if ((p % 3 == 0) || (p % 5 == 0))
	{
	c += p;
	}
	p++;
	}
	printf("%d\n", c);
	return (0);
}
