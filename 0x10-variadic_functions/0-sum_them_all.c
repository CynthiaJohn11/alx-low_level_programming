#include "variadic_functions.h"

/**
 * sum_them_all - add all of its parameter
 * @n: The arguments
 *
 * Return: Return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int k = 0;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (k = 0; k < n ; k++)
		sum += va_arg(list, int);
	va_end(list);

	return (sum);
}
