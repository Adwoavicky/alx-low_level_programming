#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point 
* description: generatea random password 
* Return: always 0
*/

int main(void)
{
	char password[84];
	int q = 0, s = 0, t, u;

	srand(time(0));

	while (s < 2772)
	{
		password[q] = 33 + rand() % 94;
		s += password[q++];
	}

	password[q] =  '\0';

	if (s != 2772)
	{
		t = (s - 2772) / 2;
		u = (s - 2772) / 2;

		if ((s - 2772) % 2 != 0)
			t++;
		for (q = 0; password[q]; q++)

		{
			if (password[q] >= (33 + t))
			{
				password[s] -= u;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
