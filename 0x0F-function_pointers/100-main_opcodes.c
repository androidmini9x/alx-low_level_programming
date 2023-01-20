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
	unsigned char *ptr;

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

	ptr = (unsigned char *) main;
	i = 0;
	if (number > 0)
	{
		while (i < (number - 1))
		{
			printf("%02hhx ", ptr[i]);
			i++;
		}
	printf("%hhx\n", ptr[i]);
	}
	return (0);
}
