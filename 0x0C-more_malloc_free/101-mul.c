#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/**
* check_digit - assess if a string contains a non- digit char
* @s: string to be assessed
* Return: 0 if non-digit is found else 1
*/

int check_digit(char *s)
{
	int b = 0;

	while (s[b])
	{
		if (s[b] < '0' || s[b] > '9')
			return (0);
		b++;
	}
	return (1);
}

/**
* _strlen - funtion that returns the length of a string
* @s: string to be returned
* Return: the length of the string
*/

int _strlen(char *s)
{
	int g = 0;

	while (s[g] != '\0')
	{
		g++;
	}
	return (g);
}

/**
* error - check for errors in  the function
* Return: void
*/

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
* main - print out the multiples of two positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: always void
*/

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int mul, mul1, j, s, c, n, v, *answer, a = 0;

	num1 = argv[1], num2 = argv[2];
	if (argc != 3 || !check_digit(num1) || !check_digit(num2))
		error();
	mul = _strlen(num1);
	mul1 = _strlen(num2);
	j = mul + mul1 + 1;
	answer = malloc(sizeof(int) * j);
	if (!answer)
		return (1);
	for (s = 0; s <= mul + mul1; s++)
		answer[s] = 0;
	for (mul = mul - 1; mul >= 0; mul--)
	{
		n = num1[mul] - '0';
		c = 0;
		for (mul1 = _strlen(num2) - 1; mul1 >= 0; mul1--)
		{
			v = num2[mul1] - '0';
			c += answer[mul + mul1 + 1] + (n * v);
			answer[mul + mul1 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			answer[mul + mul1 + 1] += c;
	}
	for (s = 0; s < j - 1; s++)
	{
		if (answer[s])
			a = 1;
		if (a)
			_putchar(answer[s] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(answer);
	return (0);
}
