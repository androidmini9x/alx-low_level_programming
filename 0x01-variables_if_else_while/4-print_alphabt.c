#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of app
 * 0x01-variables_if_else_while
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
