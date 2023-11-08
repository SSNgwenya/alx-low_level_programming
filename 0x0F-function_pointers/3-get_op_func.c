#include "3-calc.h"
#include <stdlib.h>


/**
 * get_op_func - picks correct function to perform
 *               operation requested by the user.
 * @s: The operator passed as argument.
 * Return: pointer to func corresponding
 *         to operator given as a parameter.
 */



int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};


	int x = 0;


	while (ops[x].op != NULL && *(ops[x].op) != *s)
		x++;


	return (ops[x].f);
}
