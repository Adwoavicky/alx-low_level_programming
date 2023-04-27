#include "main.h"
/**
* _isdigit - assess for a digit
* @c: character to be assessed
* Return: 1 if character found is a digit and 0 if otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
