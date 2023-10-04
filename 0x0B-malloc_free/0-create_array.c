#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *g;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	g = (char *) malloc(sizeof(char) * size);

	if (g == NULL)
		return (0);

	while (i <= size - 1)
	{
		g[i] = c;
		i++;
	}
	g[i] = 0;
	return (g);
}
