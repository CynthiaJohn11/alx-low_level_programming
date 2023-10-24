#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints the elements
 * @h: Linked list of type listint_t to print
 * Return: The nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t plus = 0;

	while (h)
	{
		plus++;
		printf("%i\n", (*h).n);
		h = (*h).next;
	}
	return (plus);
}
