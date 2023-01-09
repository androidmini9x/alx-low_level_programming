#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int
 * @av: char[][]
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int length;
	char *str;

	if (ac == 0 || av == NULL)
		return (0);

	length = 0;
	for (i = 0; i < ac; i++)
		length += strlen(av[i]);

	str = malloc(sizeof(char) * length + ac + 1);

	if (str == NULL)
		return (0);

	int j = 0;

	for (i = 0; i < ac; i++)
	{
		int k = 0;

		while (*(av[i] + k) != '\0')
		{
			*(str + j) = *(av[i] + k);
			j++;
			k++;
		}
		*(str + j) = '\n';
		j++;
	}

	*(str + j) = '\0';

	return (str);
}
