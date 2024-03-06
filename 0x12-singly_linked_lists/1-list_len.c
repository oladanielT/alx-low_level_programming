#include <stdio.h>
#include "lists.h"

/**
 * list_len - function to list the element in a linked list
 * @h: the linked list
 * Return: the elements of a linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n = n + 1;
		h = h->next;
	}
	return (n);
}
