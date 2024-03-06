#include <stdio.h>
#include "main.h"


/**
 * list_len - function to return the element of a linked list
 * @h: first element of the list
 * Return: element of the linked list
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h=h->next;
	}
	return (s);
}
