#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - function that prints anything
* @format: list of types of arguments passed
*/

void print_all(const char * const format, ...)
{
	int h = 0;
	char *str, *all = "";

	va_list everything;

	va_start(everything, format);

	if (format)
	{
		while (format[h])
		{
			switch (format[h])
			{
				case 'c':
	printf("%s%c", all, va_arg(everything, int));
	break;
				case 'i':
	printf("%s%d", all, va_arg(everything, int));
	break;
				case 'f':
	printf("%s%f", all, va_arg(everything, double));
	break;
				case 's':
	str = va_arg(everything, char*);
	if (!str)
		str = "(nil)";
	printf("%s%s", all, str);
	break;
				default:
	h++;
	continue;
			}
			all = ", ";
			h++;
		}
	}
	printf("\n");
	va_end(everything);
}
