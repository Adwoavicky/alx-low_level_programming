#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int m;
int n;
int o;
for (m = 0; m < 10; m++)
{
for (n = m + 1; n < 10; n++)
{
for (o = n + 1; o < 1; o++)
{
	if (m != n && m != o && n != o)
	{
		putchar(m + '0');
		putchar(n + '0');
		putchar(o + '0');
		if (m != 7 || n != 8 || o != 9)
		{
		putchar(',');
		putchar(' ');
		}
}
}
}
}
putchar('\n');
return (0);
}
