#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: linked list
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);
		head = head->next;
		count++;
	}

	return (count);
}
