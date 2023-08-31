#include <unistd.h>

/**
 * _putchar - writes c into stdout
 * @c: The character to be printed
 * Return: 1 on success
 * On erro, return -1, errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
