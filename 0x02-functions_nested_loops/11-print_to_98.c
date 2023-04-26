#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @a: start printing from this number
 */

void print_to_98(int a)
{
	if (a <= 98)
	{
	for (a = 0; a <= 98; a++)
	{
	if (a == 98)
	{
	printf("%d , ", a);
	printf("\n");
	break;
	}
	else
	{
	printf("%d , ", a);
	}
	}
	}
	else
	{
	for (a = 0; a >= 98; a--)
	{
	if (a == 98)
	{
	printf("%d , ", a);
	printf("\n");
	break;
	}
	else
	{
	printf("%d , ", a);
	}
	}
	}
}
