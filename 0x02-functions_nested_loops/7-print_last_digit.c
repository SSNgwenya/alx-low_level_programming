#include "main.h"

/**
 * print_last_digit - prints last digit
 * @sunny: function parameter
 * Return: mbali
 */


int print_last_digit(int sunny)
{
	int mbali;

	mbali = sunny % 10;

	if (sunny < 0)
		mbali = -mbali;
	_putchar(mbali + '0');
	return (mbali);
}
