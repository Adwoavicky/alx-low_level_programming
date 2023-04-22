#include <stdio.h>
/**
 * main - prints combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int q;
	int p;

	for (q = 48; q <= 56; q++)
	{
	for (p = 49; p <= 57; p++)
	{
		if (q != p)
		{
		putchar(q);
		putchar(p);
		}
		if (q != 56 || p != 57)
		break;
		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');
	return (0);
}
