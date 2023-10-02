#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: If the substring is located - a pointer to the beginning
 *					 of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int bit;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		bit = 0;

		if (haystack[bit] == needle[bit])
		{
			do {
				if (needle[bit + 1] == '\0')
					return (haystack);

				bit++;

			} while (haystack[bit] == needle[bit]);
		}

		haystack++;
	}

	return ('\0');
}
