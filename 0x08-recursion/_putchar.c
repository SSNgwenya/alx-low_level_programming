#include <unistd.h>

/**
 * _putchar writes the charecter c to stdout
 * @c: Charector to be printed
 * Return: 1 if successful, and -1 n error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
