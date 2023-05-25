#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - displays numbers followed by a new line
* @separator: the string to be printed
* @n: the number of integers passed
* @...: number of arguments that is yet to be passed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prin;
	unsigned int i;

	va_start(prin, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(prin, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(prin);
}
