#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints the characters from 'a' to 'z' using a while loop
 *
 * Return: 0 (success)
 */
int main(void)
{
    char b = 'a';
    char c = 'z';

    while (b <= c)
    {
        putchar(b);
        b++;
    }
    putchar('\n');

    return (0);
}

