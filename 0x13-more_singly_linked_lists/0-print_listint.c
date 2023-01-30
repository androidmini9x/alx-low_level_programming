#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a list_t list.
 * @h: linked list [int]
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
