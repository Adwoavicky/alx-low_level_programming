#include <stdio.h>
/**
* main - Entry point
* discrription: writes alphabets in lowercase except q and e
* Return: always 0
  */
int main(void)
{
	int b = 97;

	while (b <= 122)
	{
		if (b == 101 || b == 113)
		{
			b++;
			continue;
		}
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
