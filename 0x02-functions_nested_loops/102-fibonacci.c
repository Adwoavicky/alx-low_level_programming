#include <stdio.h>
/**
* main - prints the first 50 fibonacci numbers
* Return: always 0
*/

int main(void)
{
	int m = 0;
	long F1 = 1, F2 = 2;

	while (m < 50)
	{
	if (m == 0)
	printf("%ld, ", F1);
	else if (m == 1)
	printf("%ld, ", F2);
	else
	{
	F2 += F1;
	printf("%ld, ", F2);
	}
	m++;
	}
	printf("\n");
	return (0);
}
