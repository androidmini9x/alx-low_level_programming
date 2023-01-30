#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: linked list [int]
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *node;

	if (*head == NULL)
		return (i);

	node = *head;
	i = node->n;
	*head = node->next;
	free(node);

	return (i);
}
