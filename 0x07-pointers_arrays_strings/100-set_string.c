#include "main.h"

/**
* set_string - replaces the value of a pointer to a character
* @s: pointer to be replaced
* @to: the character that takes the value of the pointer
* Return: always void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
