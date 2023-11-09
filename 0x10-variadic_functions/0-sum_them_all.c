
#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - returns sum of all its paramters.
 * @n: number of paramters passed to function.
 * @...: variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list k;
	unsigned int a;
	unsigned int x = 0;


	va_start(k, n);


	for (a = 0; a < n; a++)
		x += va_arg(k, int);

	va_end(k);


	return (x);
}
