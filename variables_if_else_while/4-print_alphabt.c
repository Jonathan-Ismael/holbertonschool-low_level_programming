#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints the characters from 'a' to 'z' in lowercase
 *              followed by the characters from 'A' to 'Z' in uppercase
 *              using while loops.
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
    if (b != 'q' || b != 'e')
    {
        putchar(b);
        b++;
    }


    putchar('\n');  

    return (0);
}
