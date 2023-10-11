#include "function_pointers.h"

/**
 * print_name - To print a given name
 * @name: The given name to print
 * @f: The pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
