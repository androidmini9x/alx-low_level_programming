#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the pointer of the string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	while (i > -1)
		_putchar(*(s + i--));

	_putchar('\n');
}
