#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - function to add elemnt to the end of a node
 * @head: first element in a node
 * @str: the element in a linked list
 * Return: the address to the end element in a node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *promp = *head;

	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (promp->next)
	{
		promp = promp->next;
		promp->next = new;

		return (new);
	}
}

