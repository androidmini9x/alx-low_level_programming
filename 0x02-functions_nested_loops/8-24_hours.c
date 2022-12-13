#include "main.h"
/**
 * jack_bauer - Print Jack Bauer day for each minute
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; ++h)
	{
		for (m = 0; m < 60; ++m)
		{
			if (h < 10)
				_putchar(48);
			else if (h > 9 && h < 20)
				_putchar(49);
			else
				_putchar(50);
			_putchar('0' + (h % 10));
			_putchar(58);

			if (m < 10)
				_putchar(48);
			else if (m > 9 && m < 20)
				_putchar(49);
			else if (m > 19 && m < 30)
				_putchar(50);
			else if (m > 29 && m < 40)
				_putchar(51);
			else if (m > 39 && m < 50)
				_putchar(52);
			else
				_putchar(53);
			_putchar('0' + (m % 10));
			_putchar('\n');
		}
	}
}
