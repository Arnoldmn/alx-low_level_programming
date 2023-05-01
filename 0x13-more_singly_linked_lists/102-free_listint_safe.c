#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a  list, even if it contains a loop.
 * @h: head of the list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;

	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		count++;
		if (current->next >= current)
		{
			free(current);
			break;
		}
		tmp = current;
		current = current->next;
		tmp->next = NULL;
		free(tmp);
	}

	*h = NULL;
	return (count);
}

