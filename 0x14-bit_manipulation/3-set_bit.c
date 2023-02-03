#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: binary as string
 * @index: index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin;

	bin = (sizeof(*n) * 8);

	if (index < bin)
	{
		*n |= 1 << index;
		return (1);
	}
	return (-1);
}
