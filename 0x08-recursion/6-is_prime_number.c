#include "main.h"

/**
 * _primecheck - Calculates if a number is prime recursively
 * @n: The number to evaluate
 * @d: The iterator
 *
 * Return: 1 if num is prime, 0 if not
 */

int _primecheck(int n, int d)
{
	if (d == n)
		return (1);
	else if (n % d == 0/* && d > 0*/)
		return (0);
	else
		return (_primecheck(n, d + 1));
}

/**
 * is_prime_number - Tells if an integer is a prime number or not
 * @n: The number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_primecheck(n, 2));
}
