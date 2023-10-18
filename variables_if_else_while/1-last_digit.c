#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int n;
        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (n % 10 > 5)
        {
            printf("if the last digit of %i is %i  greater than 5: the string and is greater than 5\n", n, n % 10);
        }
        if (n % 10 == 0)
        {
            printf("the last digit of %i is %i the string and is 0\n", n, n % 10);
        }
        if (n % 10 < 6 || n % 10 != 0)
        {
            printf("the last digit of %i is %i  the string and is less than 6 and not 0\n", n, n % 10);
        }

        return (0);
}
