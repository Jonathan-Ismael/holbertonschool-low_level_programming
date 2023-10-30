#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * *_strpbrk - check the code
 * @s: pointer
 * @accept: pointer
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}

	}
	return ('\0');
}
