#include "lists.h"
/**
 * rec_free_listint - frees list
 * @head: pointer to list
 * @size: list' size
 * Return: number of nodes
 */
int recusion_free_listint(listint_t *head, int size)
{
	if (head)
	{
		size = recusion_free_listint(head->next, size + 1);
		free(head);
	}
	return (size);
}
/**
 * free_listint_safe - frees list with double pointer
 * @h: pointer to pointer to list
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	int size = 0;

	if (h && *h)
	{
		size = recusion_free_listint(*h, size);
		*h = NULL;
	}
	return (size);
}
