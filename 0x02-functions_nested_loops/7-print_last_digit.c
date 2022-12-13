#include "main.h"
/**
 * Print the last digit
 *
 * Return: [int] - last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n >= 0)
		last = n % 10;
	else
		last = (-1 * n) % 10;
	_putchar('0' + last);
	return (last);
}
