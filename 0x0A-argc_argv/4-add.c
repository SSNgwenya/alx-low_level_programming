#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - prints the sum of positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int x;
	int sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (x = 0; argv[a][x] != '\0'; x++)
		{
			if (!isdigit(argv[a][x]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
