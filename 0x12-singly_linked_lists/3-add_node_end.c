#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head:   head of the list.
 * @str: string to be stored in the new node.
 *
 * Return:  NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *last = *head;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = newNode;
	return (newNode);
}
