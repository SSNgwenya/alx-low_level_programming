#include "main.h"

/**
 * _strlen_recursion - print string length
 * @s: string
 * Return: length of string as an integer
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
