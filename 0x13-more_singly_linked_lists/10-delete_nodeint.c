#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: linked list [int]
 * @index: index
 * Return: node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *h, *del_node;

	h = *head;
	if (index == 0 && h != NULL)
	{
		*head = h->next;
		free(h);
		return (1);
	}
	while (h != NULL)
	{
		if (index == (idx + 1))
		{
			del_node = h->next;
			h->next = del_node->next;
			free(del_node);
			return (1);
		}
		h = h->next;
		idx++;
	}
	return (-1);
}
