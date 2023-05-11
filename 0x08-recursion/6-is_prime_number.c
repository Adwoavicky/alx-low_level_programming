#include "main.h"

int real_prime(int n, int s);

/**
* is_prime_number - indicates if an integer is a prime number or not
* @n: number to be displayed
* Return: 1 if number is prime and 0 if otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (real_prime(n, n - 1));
}

/**
* real_prime - indicates a number as prime recursively
* @n: number to be displayed
* @s: second number
* Return: 1 if number is prime and 0 if otherwise
*/

int real_prime(int n, int s)
{
if (s == 1)
return (1);
if (n % s == 0 && s > 0)
return (0);
return (real_prime(n, s - 1));
}
