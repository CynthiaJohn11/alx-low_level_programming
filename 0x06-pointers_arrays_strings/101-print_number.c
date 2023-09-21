#include "main.h"
/**
 * print_number - print numbers chars
 * @s: integer params
 * Return: 0
 */

void print_number(int s)
{
	unsigned int s1;

	s1 = s;
	if (s < 0)
	{
		_putchar('-');
		s1 = -s;
	}
	if (s1 / 10 != 0)
	{
		print_number(s1 / 10);
	}
	_putchar((s1 % 10) + '0');
}
