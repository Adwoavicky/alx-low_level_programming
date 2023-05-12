#include <stdio.h>
#include "main.h"

/**
* main - displays the name of a program with new line
* @argc: argument count
* @argv: the array of an argument
* Return: always 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
