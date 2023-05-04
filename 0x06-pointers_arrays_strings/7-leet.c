#include "main.h"
/**
* leet - prints the value of a string into 1337 after encoding
* Letters a and A should be replaced by 4
* Letters e and E should be replaced by 3
* Letters o and O should be replaced by 0
* Letters t and T should be replaced by 7
* Letters l and L should be replaced by 1
* @r: string to be printed
* Return: pointer to string
*/

char *leet(char *r)
{
	int s, p;
	char letters[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	s = 0;
	while (r[s] != '\0')
	{
		p = 0;
	while (p < 10)
	{
	if (letters[p] == r[s])
	{
		r[s] = number[p];
	}
	p++;
	s++;
	}
	}
	return (r);
}

