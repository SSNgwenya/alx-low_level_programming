#include <stdio.h>

/**
 * main - This a main function
 * Return: Always return 0 if successful
 */

int main(void)
{
	int num = 0;

	do
	{
		printf("%d", num);
		num++;
	} 
	while (num < 10);

	
	putchar('\n');
	return (0);
}
