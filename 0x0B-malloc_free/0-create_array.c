#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: unsigned int
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
		return (0);

	ch = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
