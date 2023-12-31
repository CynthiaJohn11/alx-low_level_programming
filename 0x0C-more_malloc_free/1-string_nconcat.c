#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - To concatenates two strings
 *                  while second string is an n value
 * @s1: The string to be appended to
 * @s2: The string to concatenate from
 * @n: The bytes from s2 to concatenate to s1
 * Return: A pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *f;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		f = calloc((len1 + n + 1), sizeof(char));
	else
		f = calloc((len1 + len2 + 1), sizeof(char));

	if (f == NULL)
		return (NULL);

	while (i < len1)
	{
		f[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		f[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		f[i++] = s2[j++];

	f[i] = 0;

	return (f);
}
