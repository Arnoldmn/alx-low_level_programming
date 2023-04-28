#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add neq node at the end
 * @head: start of the list 
 * @str: string to start from
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (head == NULL || str == NULL)
	{
	    return (NULL);
	}
	
	list_t *new_node = malloc(sizeof(list_t));
	
	if (new_node == NULL)
	{
		return (NULL);
	}
       
	char *new_str = strdup(str);
	
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	
	new_node->str = new_str;
	new_node->next = NULL;
	
	if (*head == NULL)
	{
		*head = new_node;
	}
	
	else
	{
		list_t *current = *head;
		
		while (current->next != NULL)
		{
			current = current->next;
		}
		
		current->next = new_node;
	}
	
	return new_node;
}
