#include "main.h"
/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another.
 * @n: binary as string
 * @m: index
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 0;
	unsigned long int i = n ^ m;

	while (i)
	{
		if (i & 1)
			num++;
		i = i >> 1;
	}
	return (num);
}
