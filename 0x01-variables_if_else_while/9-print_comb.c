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
	int arr[29] = {48, 44, 32, 49, 44, 32, 50, 44, 32, 51, 44, 32, 52, 44, 32,
	53, 44, 32, 54, 44, 32, 55, 44, 32, 56, 44, 32, 57, 36};
	for (i = 0; i < 29; ++i)
	{
		putchar(arr[i]);
	}
	putchar('\n');
	return (0);
}
