#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: String
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	char ch;

	if (*s == '\0')
	{
		return;
	}

	ch = *s;

	_print_rev_recursion(++s);
	_putchar(ch);
}
