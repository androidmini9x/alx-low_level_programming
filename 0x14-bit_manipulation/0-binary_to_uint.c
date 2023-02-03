#include <string.h>
#include "main.h"
unsigned int power(int number, int e);
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary as string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	len = strlen(b) - 1;

	while (len >= 0)
	{
		if (*(b + len) == '1')
		{
			num += power(2, i);
		}
		if (*(b + len) != '1' && *(b + len) != '0')
			return (0);
		i++;
		len--;
	}

	return (num);
}
/**
 * power - power of number.
 * @number: binary as string
 * @e: power
 * Return: unsigned int
 */
unsigned int power(int number, int e)
{
	int i;
	unsigned int result = 1;

	for (i = 0; i < e; i++)
	{
		result *= number;
	}

	return (result);
}
