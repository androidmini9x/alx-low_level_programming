#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: binary as string
 * Return: unsigned int
 */
void print_binary(unsigned long int n)
{
	int binary;

	if (n >> 1)
		print_binary(n >> 1);

	binary = n & 1;
	_putchar(binary + '0');
}
