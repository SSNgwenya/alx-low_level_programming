#include <stdio.h>

/**
 * main - this is a function
 *
 * Return: 0 if successful
 */

int main(void)
{
	printf("Size of char: %lu byte(s)",unsigned long) sizeof(char));
	printf("Size of int: %lu byte(s)",(unsigned long) sizeof(int));
	printf("Size of a long int: %lu byte(s)",(unsigned long) sizeof(long int));
	printf("Size of a long long int: %lu byte(s)",(unsigned long) sizeof(long long int));
	printf("Size of a float: %lu byte(s)",(unsigned long) sizeof(float));
	return (0);
}
