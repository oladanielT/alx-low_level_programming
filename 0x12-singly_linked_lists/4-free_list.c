#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function to free a linked list
 * @head: pointer to first element of the list
 * Return: to return void
 */

void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);

		head = next;
	}
}
