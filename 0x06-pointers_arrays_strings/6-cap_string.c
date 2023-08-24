#include "main.h"

/**
 * cap_string - cap all each charecter
 * @s: string being capitalized
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int q;
	int m;
	char ss[13] = {' ', '\t', '\n', ',',
';', ',', '!', '?', ' '' ', '(', ')', '{', '}'};

	for (q = 0; s[q] != '\0'; q++)
	{
		if (q == 0 && s[q] >= 'a' && s[q] <= 'z')
			s[q] = s[q] - 32;
		for (m = 0; m < 13; m++)
		{
			if (s[q] == ss[m])
			{
				if (s[q + 1] >= 'a' && s[q + 1] <= 'z')
					s[q + 1] = s[q + 1] - 32;
			}
		}
	}
	return (s);
}
