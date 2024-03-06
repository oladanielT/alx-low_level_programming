#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function to add a new element to a linked list
 * @head: first element of the linked list
 * @str: the linked list
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	{
		len++;

		new = malloc(sizeof(list_t));

		if (!new)
		{
			return (NULL);
		}
		else
		{
			new->str = strdup(str);
			new->len = len;
			new->next = (*head);
			(*head) = new;
		}
	}
	return (*head);
}
