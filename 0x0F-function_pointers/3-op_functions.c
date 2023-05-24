#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - prints out the sum of two numbers
* @a: first number
* @b: second number
* Return: the sum of the two numbers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - prints out the difference of two numbers
* @a: first number
* @b: second number
* Return: the difference of the two numbers
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - prints out the product of two numbers
* @a: first number
* @b: second number
* Return: the product of the two numbers
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - prints out the division of two numbers
* @a: first number
* @b: second number
* Return: the result of the two numbers
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - prints out the remainder of the division of two numbers
* @a: first number
* @b: second number
* Return: the result of the two numbers
*/

int op_mod(int a, int b)
{
	return (a % b);
}
