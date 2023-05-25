#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - prints the return of the sum of all its parameters
* @n: the number of parameters in the function
* @...: number of arguments in the function
* Return: 0 if n == 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list para;
	unsigned int m, sum = 0;

	va_start(para, n);

	for (m = 0; m < n; m++)
		sum += va_arg(para, int);
	va_end(para);

	return (sum);
}
