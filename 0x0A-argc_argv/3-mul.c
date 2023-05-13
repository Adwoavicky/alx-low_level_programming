#include <stdio.h>
#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to be changed
* Return: always void
*/

int _atoi(char *s)
{
	int t = 0;
	int p = 0;
	int v = 0;
	int b = 0;
	int c = 0;
	int m = 0;

	while (s[b] != '\0')
		b++;

	while (t < b && v == 0)
	{
		if (s[t] == 45)
			++p;

		if (s[t] >= 48 && s[t] <= 57)
		{
			m = s[t] - 48;
			if (m % 2)
				m = -m;
			v = v * 10 + m;
			c = 1;
			if (s[t + 1] < 48 || s[t + 1] > 58)
				break;
			c = 0;
		}
		t++;
	}

	if (c == 0)
		return (0);

	return (v);
}


/**
* main - prints the value of the multiples of two numbers
* @argc: the number of arguments
* @argv: the array of arguments
* Return: Error if two arguments are not found and 1 if found
*/

int main(int argc, char *argv[])
{
	int answer, g, h;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	g = _atoi(argv[1]);
	h = _atoi(argv[2]);
	answer = g * h;

	printf("%d\n", answer);

	return (0);
}
