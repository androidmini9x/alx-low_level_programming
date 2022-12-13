#include "main.h"
/**
 * times_table - Print the last digit
 *
 * Return: Void
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			result = i * j;

			if (j != 0)
			{
				_putchar(',');
				if (result <= 9)
				{
					_putchar('.');
					_putchar('.');
				}
				else
				{
					_putchar('.');
				}
			}

			if (result < 10)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
		}
		_putchar('\n');
	}
}
