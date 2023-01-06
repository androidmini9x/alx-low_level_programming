#include <stdio.h>
/**
 * main - print the program name
 * @argc: number of args
 * @argv: array os args
 * Return: Void
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", --argc);

	return (0);
}
