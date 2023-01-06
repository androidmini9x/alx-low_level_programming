#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: number of args
 * @argv: array os args
 * Return: Void
 */
int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%i\n", x * y);

	return (0);
}
