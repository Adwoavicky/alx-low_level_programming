#include "main.h"

/**
* rot13 - prints the encoding string using rot13
* @p: string to be printed
* Return: pointer to string
*/

char *rot13(char *p)
{
	int s, t;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char beta[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (s = 0; p[s] != '\0'; s++)
	{
		for (t = 0; t < 52; t++)
		{
			if (p[s] == alpha[t])
			{
				p[s] = beta[t];
				break;
			}
		}
	}
	return (p);
}
