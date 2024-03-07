#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * free_list - function to free a list
 * @head: the pointer to the first element of the list
 * Return: Always 0
 */


void free_list(list_t *head)
{
	list_t *current = *head;
	list_t *next;

	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
