#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet from 'a' to 'z',
 *              excluding the letters 'q' and 'e', followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    /* Loop to print the lowercase alphabet */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        /* Check if the letter is not 'q' or 'e' */
        if (letter != 'q' && letter != 'e')
        {
            putchar(letter);
        }
    }

    /* Print a new line */
    putchar('\n');

    return (0);
}

