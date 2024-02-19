#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme program
 * Return: 0 when successful
 */

int main(void)
{
    int password[100];
    int k;
    int s = 0;
    int a;

    srand(time(NULL));
    for (k = 0; k < 100; k++)
    {
        password[k] = rand() % 78;
        s += (password[k] + '0');
        putchar(password[k] + '0');
        if ((2772 - s) < 78)
        {
            a = 2772 - s;
            s += a;
            putchar(a + '0');
            break;
        }
    }
    return (0);
}
