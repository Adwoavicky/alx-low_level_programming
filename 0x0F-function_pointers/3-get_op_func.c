#include "3-calc.h"
#include <stdlib.h>

/**
* get_op_func - selects the correct function to be performed
* @s: the operator passed as an argument
* Return: a pointer to the function which cooresponds to the operator
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int m = 0;

	while (ops[m].op != NULL && *(ops[m].op) != *s)
		m++;
	return (ops[m].f);
}
