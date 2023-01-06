#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of args
 * @argv: array os args
 * Return: Void
 */
int main(int argc, char *argv[])
{
	int i, len;
	int sum = 0;
	char *str;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		str = argv[i];
		len = strlen(str);

		while (len > 0)
		{
			char c = *(str + len - 1);

			if (isdigit(c) == 0)
			{
				printf("Error\n");
				return (1);
			}
			len--;
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
