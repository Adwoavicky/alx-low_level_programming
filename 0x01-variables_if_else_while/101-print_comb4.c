#include <stdio.h>
/**
 * main - Entry point
 * description: prints combination of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int k;
int m;
int j;

	for (k = 48; k < 58; k++)
	{
		for (m = 49; m < 58; m++)
		{
			for (j = 50; j < 58; j++)
			{
				if (m > j && j > k)
				{
					putchar(k);
					putchar(m);
					putchar(j);
					if (k != 55 || m != 56)
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
