#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The  string to be searched
 * @accept: The set of bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int bit;

	while (*s)
	{
		for (bit = 0; accept[bit]; bit++)
		{
			if (*s == accept[bit])
				return (s);
		}


		s++;
	}
	return (NULL);
}
