#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of args
 * @argv: array os args
 * Return: Void
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
