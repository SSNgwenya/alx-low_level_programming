#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: Variable
 * Return: Always 0 if successful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
