#include "main.h"

/**
 * _findsqrt - Wrapper that does the recursion bit
 * @n : The input number
 * @square: The maximum number to square
 * Return: Square root of @n or -1
*/

int _findsqrt(int n, int square)
{
	int sqrd = square * square;

	if (sqrd == n)
		return (square);
	else if (sqrd > n)
		return (-1);
	else
		return (_findsqrt(n, square + 1));
}

/**
 * _sqrt_recursion - Function that returns the natural
 *                   square root of a number
 * @n: The input number
 * Return: The square root
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	else
		return (_findsqrt(n, 1));
}
