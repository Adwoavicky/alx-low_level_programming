#include "main.h"
/**
* print_last_digit - writes the last digit of a number
* @v: the int to extract the last digit from
* Return: value of the last digit
*/
int print_last_digit(int v)
{
	int p;

	p = v % 10;
	if (p < 0)
	{
	_putchar(-p + 48);
	return (-p);
	}
	else
	{
	_putchar(p + 48);
	return (p);
	}
}
