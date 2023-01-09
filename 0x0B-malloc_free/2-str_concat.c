#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *constr;

	constr = malloc(sizeof(s1) + sizeof(s2) + 1);

	if (constr == NULL)
		return (0);

	i = 0;
	while (*(s1 + i) != '\0')
	{
		constr[i] = s1[i];
		i++;
	}

	j = 0;

	while (*(s2 + j) != '\0')
	{
		constr[i] = s2[j];
		i++;
		j++;
	}

	constr[i] = '\0';

	return (constr);
}
