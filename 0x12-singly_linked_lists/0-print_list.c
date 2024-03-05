#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to list element of a linked list
 * @p: pointer to the list
 * return:the number of the list
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] (%s)\n", h->len, h->str);
		}
		h = h->next;
		s++;
	}
	return (s);
}
