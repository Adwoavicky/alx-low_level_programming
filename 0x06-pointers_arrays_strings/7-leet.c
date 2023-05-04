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

	for (s = 0; r[s] != '\0'; s++)
	{
	for (p = 0; p < 10; p++)
	{
	if (r[s] == letters[p])
	{
		r[s] = number[p];
	}
	}
	}
	return (r);
}

