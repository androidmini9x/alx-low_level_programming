#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: linked list [int]
 * @idx: index
 * @n: value
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *h;

	if (*head == NULL)
		return (NULL);

	h = *head;

	if (idx == 0)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);
		node->n = n;
		node->next = h;
		*head = node;
		return (node);
	}

	while (h != NULL)
	{
		if (idx == (i + 1))
		{
			node = malloc(sizeof(listint_t));
			if (node == NULL)
				return (NULL);

			node->n = n;
			node->next = h->next;
			h->next = node;
			return (node);
		}
		h = h->next;
		i++;
	}

	return (NULL);
}
