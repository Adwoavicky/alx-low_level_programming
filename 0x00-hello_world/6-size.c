#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{

char m;
int t;
long int n;
long long int p;
float g;
printf("Size of a char:%lu byte(s)\n", sizeof(m));
printf("Size of an int:%lu byte(s)\n", sizeof(t));
printf("Size of a long int:%lu byte(s)\n", sizeof(n));
printf("Size of a long long int:%lu byte(s)\n", sizeof(p));
printf("Size of a float:%lu byte(s)\n", sizeof(g));
return (0);
}
