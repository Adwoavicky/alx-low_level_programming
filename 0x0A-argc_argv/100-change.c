#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - displays the least amount of coins needed
* to give change
* @argc: the number of arguments in the program
* @argv: arrays of arguments in the program
* Return: Error if argc is not 1, 0 if otherwise
*/

int main(int argc, char *argv[])
{
	int add, sub, answer;
	int multip[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	add = atoi(argv[1]);
	answer = 0;

if (add < 0)
{
printf("0\n");
return (0);
}

for (sub = 0; sub < 5 && add >= 0; sub++)
{
while (add >= multip[sub])
{

answer++;
add -= multip[sub];
}
}

printf("%d\n", answer);
return (0);
}
