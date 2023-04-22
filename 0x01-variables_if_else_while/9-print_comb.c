#include <stdio.h>
/**
 * main - Entry point
 * description: prints possible comminations of numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v;

	for (v = 48; v <= 57; v++)
	{
		putchar(v);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}
