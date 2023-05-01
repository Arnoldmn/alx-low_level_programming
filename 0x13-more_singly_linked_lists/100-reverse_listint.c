#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list
 * @head: pointer to  head of list
 *
 * Return: pointer to first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;
	return (*head);
}

