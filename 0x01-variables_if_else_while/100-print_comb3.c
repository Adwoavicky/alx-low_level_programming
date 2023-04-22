#include <stdio.h>
/**
 * main - prints combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int q;
	int p;

	for (q = 0; q < 10; q++)
	{
	for (p = q + 1; p < 10; p++)
	{
		putchar(q + '0');
		putchar(p + '0');
		if (q != 8 || p != 9)
		{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
