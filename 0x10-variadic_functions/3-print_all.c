#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 */


void print_all(const char * const format, ...)
{
	int x = 0;
	char *king;
	char *sunny = "";
	va_list l;

	va_start(l, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sunny, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", sunny, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", sunny, va_arg(l, double));
					break;
				case 's':
					king = va_arg(l, char *);
					if (!king)
						king = "(nil)";
					printf("%s%s", sunny, king);
					break;
				default:
					x++;
					continue;
			}
			sunny = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(l);
}
