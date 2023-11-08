#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - returns sum of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: sum of a and b.
 */


int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: difference of a and b.
 */


int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: product of a and b.
 */


int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - returns quotient of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: quotient of a and b.
 */



int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - returns remainder of the division of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: remainder of division of a by b.
 */


int op_mod(int a, int b)
{
	return (a % b);
}
