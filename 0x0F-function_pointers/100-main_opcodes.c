#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the opcodes of its own function
* @argc: number of arguments
* @argv: arrays of argument
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int bytes, m;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (m = 0; m < bytes; m++)
	{
		if (m == bytes - 1)
		{
			printf("%02hhx\n", ptr[m]);
			break;
		}
		printf("%02hhx ", ptr[m]);
	}
	return (0);
}
