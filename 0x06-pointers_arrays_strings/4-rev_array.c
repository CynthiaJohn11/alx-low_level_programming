#include "main.h"
/**
 * reverse_array - reverse array of an integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = b[a];
		a[b] = a[n];
		a[n] = c;
	}
}
