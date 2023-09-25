#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: The square matrix of which we print the sum of diagonals
 * @size: Size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int t = 0;

	unsigned int sum = 0, sum1 = 0;

	while (t < size)
	{
		sum += a[(size * t) + t];
		sum1 += a[(size * (t + 1)) - (t + 1)];
		t++;
	}
	printf("%d, %d\n", sum, sum1);
}
