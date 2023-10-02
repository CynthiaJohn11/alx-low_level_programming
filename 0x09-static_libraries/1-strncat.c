#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int a;

	for (a = 0; a < n && *src != '\0'; a++)
	{
		dest[len + a] = *src;
		src++;
	}
	dest[len + a] = '\0';
	return (dest);
}
