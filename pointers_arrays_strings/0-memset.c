#include "main.h"
#include <stdio.h>

/**
 * _memset - check the code
 * @s: pointer
 * @b: variable
 * @n: variable
 *
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
