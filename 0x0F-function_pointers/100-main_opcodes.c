#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the opcodes of its own main function.
 * @argc: number of arg
 * @argv: Array of arg
 * Return: Void
 */
int main(int argc, char **argv)
{
	int number, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number = atoi(argv[1]);

	if (number < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;
	while (i < number)
	{
		printf("%02hhx ", *((char *)main + i));
		if (i < number - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
