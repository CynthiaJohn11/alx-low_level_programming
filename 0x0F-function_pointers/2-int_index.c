#include "function_pointers.h"

/**
 * int_index - The searches for an integer
 * @array: The array to search inside
 * @size: The size of the array
 * @cmp: Pointer to compare function
 *
 * Return: Index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[k]) != 0)
				return (k);
			k++;
		}
	}
	return (-1);
}
