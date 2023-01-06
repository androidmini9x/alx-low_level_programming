#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of args
 * @argv: array os args
 * Return: Void
 */
int main(int argc, char *argv[])
{
	int i, j, sum;
	char *str;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int num;

		str = argv[i];
		j = 0;

		while (*(str + j) != '\0')
		{
			char c = *(str + j);

			if (c > '9' || c < '0')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
