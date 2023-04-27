#include <stdio.h>
/**
* main - Entry point
*
* Description: prints numbers from 1 to 100 w/
* Fizz for multiples of 3, Buzz for multipls of 5,
* and FizzBuzz for multiples of 3 and 5.
*
* Return: always success
*/

int main(void)
{
	int k;
	{
		for (k = 1; k <= 100; k++)
		{
			if (k % 15 == 0)
				printf("FizzBuzz");
			else if (k % 3 == 0)
				printf("Fizz");
			else if (k % 5 == 0)
				printf("Buzz");
			else
				printf("%d", k);
			if (k < 100)
				printf(" ");
		}
		printf("\n");
		return (0);
	}
}
