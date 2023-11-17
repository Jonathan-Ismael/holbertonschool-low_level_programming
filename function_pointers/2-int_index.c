#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: a pointer to the comparison function
 *
 * Return: the index of the first element for which cmp does not return 0,
 *         or -1 if no element matches or if size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array && cmp)
    {
        for (int i = 0; i < size; i++)
        {
            if (cmp(array[i]))
            {
                return i;
            }
        }
    }

    return -1;
}

