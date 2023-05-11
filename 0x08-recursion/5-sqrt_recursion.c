#include "main.h"

int real_sqrt_recursion(int n, int b);
/**
*  _sqrt_recursion - return the natural square root of a number
* @n: first numbe
* Return: -1 if n does not have a natural square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}


/**
* real_sqrt_recursion - prints the natural square root of a number
* @n: the number to print
* @b: the second number
* Return: the square root
*/

int real_sqrt_recursion(int n, int b)
{
if (b * b > n)
return (-1);
if (b * b == n)
return (b);
return (real_sqrt_recursion(n, b + 1));
}
