#include "main.h"

/**
 * _strcpy - copy the content of one string to another.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string
 */
char*_strcpy(char*dest, char*src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
