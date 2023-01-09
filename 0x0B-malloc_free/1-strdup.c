#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * it with a specific char.
 * @str: string
 * Return: char
 */
char *_strdup(char *str)
{
	char *new_str;
	int i;

	if (str == NULL)
		return (0);

	new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
		return (0);

	i = 0;
	while (*(str + i) != '\0')
	{
		new_str[i] = *(str + i);
		i++;
	}

	new_str[i] = '\0';

	return (new_str);
}
