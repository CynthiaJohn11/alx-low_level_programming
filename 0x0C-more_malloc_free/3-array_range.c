#include <stdlib.h>
#include "main.h"

/**
 * array_range - To creates an array of integers
 * @min: The minimum range of values stored
 * @max: The maximum range of values stored and number of elements
 * Return: A pointer to the new array
 */

int *array_range(int min, int max)
{
	int *k;
	int i = 0, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	k = calloc(s, sizeof(int));

	if (!k)
		return (NULL);

	while (min <= max)
	{
		k[i] = min++;
		i++;
	}
	return (k);
}
