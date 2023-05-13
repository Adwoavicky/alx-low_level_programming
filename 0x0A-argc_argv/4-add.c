#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* access_num - prints number of strings in a digit
* @str: the str array
* Return: always void
*/

int access_num(char *str)
{
	unsigned int w;

	w = 0;
	while (w < strlen(str))
	{
		if (!isdigit(str[w]))
		{
			return (0);
		}

		w++;
	}
	return (1);
}

/**
* main - displays the name of a program
* @argc: number of arguments in a program
* @argv: arrays of an argument
* Return: always 0
*/

int main(int argc, char *argv[])
{

	int k;
	int l;
	int j = 0;

	k = 1;
	while (k < argc)
	{
		if (access_num(argv[k]))
		{
			l = atoi(argv[k]);

			j += l;
		}

		else
		{
			printf("Error\n");
			return (1);
		}
		k++;
	}
	printf("%d\n", j);

	return (0);
}
