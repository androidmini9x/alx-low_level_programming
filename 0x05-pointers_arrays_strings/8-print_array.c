#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: the pointer of the string
 * @n: the length of string
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(", %i", *(a + i));
		else
			printf("%i", *(a + i));
	}
	printf("\n");
}
