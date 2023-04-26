#include "main.h"
/**
* _islower - checks for lowercase characters
* @c: the character to be checked
*
* Return:on success(1) if character is lowercase, 0 if otherwise.
*/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
