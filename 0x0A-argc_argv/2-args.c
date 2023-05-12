#include <stdio.h>
#include "main.h"

/**
* main - displays all arguments received
* @argc: the numbers of arguments received
* @argv: the arrays of arguments received
* Return: always void
*/

int main(int argc, char *argv[])
{
	int p = 0;

	while (p < argc)
	{
		printf("%s\n", argv[p]);
		p++;
	}

	return (0);
}
