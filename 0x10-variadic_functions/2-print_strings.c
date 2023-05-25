#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - prints a string followed by a new line
* @separator: the string to be printed
* @n: the number of strings to be passed
* @...: the list of arguments yet to be passed
* Return: if separator is NULL do not print
* If one of the string is NULL print (nil)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *ptr;
	unsigned int p;

	va_start(strings, n);

	for (p = 0; p < n; p++)

	{
		ptr = va_arg(strings, char *);

		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (p != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
