#include "main.h"
/**
 * _strlen_recursion - get string length
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - compare each character of string
 * @s: string
 * @a: smallest iterator
 * @b: largest iterator
 * Return: int
 */

int compare_string(char *s, int a, int b)
{
	if (*(s + a) != *(s + b - 1))
		return (0);
	if (a >= b)
		return (1);
	return (compare_string(s, a + 1, b - 1));
}
/**
 * is_palindrome - tests if string is a palindrome
 * @s: string to be tested
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (compare_string(s, 0, _strlen_recursion(s)));
}
