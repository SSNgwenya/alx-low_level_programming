#include <unistd.h>

/**
 * _putchar - addsthe character c into stdout
 * @c: printed character
 * Return: 1 when successful.
 * Return: -1 on error, and errno is appropriately set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
