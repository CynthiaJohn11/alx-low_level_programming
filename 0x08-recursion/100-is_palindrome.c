#include "main.h"

/**
 * _palprecheck - Checks the characters recursively for palindrome
 * @s: The string to check
 * @i: The iterator
 * @l: The length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int _palprecheck(char *s, int i, int l)
{
	if (s[i] != s[l - 1])
		return (0);
	if (i >= l)
		return (1);
	return (_palprecheck(s, i + 1, l - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length <= 1)
		return (1);
	return (_palprecheck(s, 0, length));
}

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: The  string
 * Return: The length
*/

int _strlen_recursion(char *s)
{
	if (*s != 0)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
