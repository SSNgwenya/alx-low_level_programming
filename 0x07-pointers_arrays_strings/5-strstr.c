#include "main.h"

/**
 * _strstr - finds substring
 * @haystack: string to be searched
 * @needle: substring to be found
 * Return: pointer to the start of located string if substring is found
 * NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;
		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);
				x++;
			} while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return ('\0');
}
