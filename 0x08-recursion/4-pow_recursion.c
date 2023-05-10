#include "main.h"

/**
* _pow_recursion - displays the return value of x ^ to the power y
* @x: first number
* @y: second number
* Return: if y is less than 0, return -1
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
