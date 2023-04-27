#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - returns number of elements
 *
 * @h: head of list
 * Return: (count)
 */

size_t print_list(const list_t *h)
{
	const  list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nill)");
		else
			printf("[%d] %s", current->len, current->str);
		count++;
		printf("\n");
		current = current->next;
	}

	return (count);
}
