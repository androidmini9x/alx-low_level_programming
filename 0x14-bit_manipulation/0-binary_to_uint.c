#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary as string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int num = 0;


	while (*(b + i) != '\0')
	{
		if (*(b + i) != '1' && *(b + i) != '0')
			return (0);

		num = num << 1;
		if (*(b + i) == '1')
		{
			num ^= 1;
		}

		i++;
	}

	return (num);
}
