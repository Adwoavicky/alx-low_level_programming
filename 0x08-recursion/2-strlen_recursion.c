#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string
* @s: the string to be returned
* Return: the string s
*/

int _strlen_recursion(char *s)
{
	int k = 0;

	if (*s)
	{
		k++;
		k += _strlen_recursion(s + 1);
	}

	return (k);
}
