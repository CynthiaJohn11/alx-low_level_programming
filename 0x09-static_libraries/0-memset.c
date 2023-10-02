#include "main.h"

/**
 * *_memset - fills memmory with a constant byte
 *@s: memory area to be filled
 *@b: char to copy
 *@n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		s[m] = b;
		m++;
	}

	return (s);
}
