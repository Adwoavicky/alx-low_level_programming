#include "main.h"

int accept(char *s, int g, int h);
int _strlen_recursion(char *s);

/**
* is_palindrome - looks through a string
* @s: string to look for
* Return: 1 if the string is palindrome and 0 if not
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (accept(s, 0, _strlen_recursion(s)));
}

/**
*_strlen_recursion - prints the length of a string
* @s: string to be printed
* Return: resulting string s
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
* accept - looks through a string recursively for palindrome
* @s: string to search for
* @g: first character
* @h: length of string
* Return: 1 if string is palindrome, 0 if not
*/

int accept(char *s, int g, int h)
{

if (*(s + g) != *(s + h - 1))
return (0);
if (g >= h)
return (1);
return (accept(s, g + 1, h - 1));
}
