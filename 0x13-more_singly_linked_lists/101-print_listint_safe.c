#include "lists.h"

/**
 * print_list_rec - print the elements of listint_t list in recursion
 * @head: pointer to list
 * @n: number of nodes received
 * Return: number of nodes
 */
size_t print_list_rec(const listint_t *head, unsigned int n)
{
	if (head)
	{
		n = print_list_rec(head->next, n + 1);
		printf("[%p] %i\n", (void *)head, head->n);
	}
	return (n);
}
/**
 * print_listint_safe - print the elements of list
 * @head: pointer to list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head)
		return (print_list_rec(head, 0));
	exit(98);
}
