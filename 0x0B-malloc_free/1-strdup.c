#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	unsigned int t = 0, len = 0;
	char *c;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	c = malloc(sizeof(char) * (len + 1));

	if (c == NULL)
		return (NULL);

	while ((c[t] = str[t]) != 0)
		t++;

	return (c);
}
