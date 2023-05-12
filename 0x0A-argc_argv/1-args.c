#include <stdio.h>
#include "main.h"

/**
* main - displays the amount of arguments within a program
* @argc: the number of argument
* @argv: the array of an argument
* Return: always void
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
