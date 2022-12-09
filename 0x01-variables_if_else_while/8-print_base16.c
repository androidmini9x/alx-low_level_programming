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
	int i;
	char c;

	for (i  = 48; i <= 57; ++i)
	{
		putchar(i);
	}
	for (c = 'a'; c <= 'f'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
