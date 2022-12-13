#include "main.h"
/**
 * Print Alphabet_x10 Function
 *
 * Return: Void.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 97; j < 122; ++j)
			_putchar(j);
		_putchar('\n');
	}
}
