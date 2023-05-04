#include "main.h"

/**
* swap_string - prints the reverse of a string
* @n: integer to print
* Return: always success
*/

void swap_string(char *n)
{
	int k = 0;
	int l = 0;
	char y;

	while (*(n + k) != '\0')
	{
		k++;
	}
	k--;

	for (l = 0; l < k; l++)
	{
		y = *(n + l);
		*(n + l) = *(n + k);
		*(n + k) = y;
	}
}

/**
* infinite_add - prints the addition of two numbers
* @n1: first number to add
* @n2: second number to add
* @r: buffer to store the result
* @size_r: buffer size
* Return: pointer to r
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int add = 0, k = 0, l = 0, sum = 0;
	int sub = 0, sub1 = 0, multip = 0;

	while (*(n1 + k) != '\0')
		k++;
	while (*(n2 + l) != '\0')
		l++;
	k--;
	l--;
	if (l >= size_r || k >= size_r)
		return (0);
	while (l >= 0 || k >= 0 || add == 1)
	{
		if (k < 0)
			sub = 0;
		else
			sub = *(n1 + k) - '0';
		if (l < 0)
			sub1 = 0;
		else
			sub1 = *(n2 + l) - '0';
		multip = sub + sub1 + add;
		if (multip >= 10)
			add = 1;
		else
			add = 0;
		if (sum >= (size_r - 1))
			return (0);
		*(r + sum) = (multip % 10) + '0';
		sum++;
		l--;
		k--;
	}
	if (sum == size_r)
		return (0);
	*(r + sum) = '\0';
	swap_string(r);
	return (r);
}

