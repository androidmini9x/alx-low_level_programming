#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings by n length
 * @s1: string
 * @s2: string
 * @n: int
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = malloc(strlen(s1) + strlen(s2) + 1);
	if (str == NULL)
		return (0);
	i = 0;
	while (*(s1 + i) != '\0')
	{
		str[i] = *(s1 + i);
		i++;
	}
	j = 0;
	while (*(s2 + j) != '\0' && j != n)
	{
		str[i] = *(s2 + j);
		j++;
		i++;
	}
	str[i] = '\0';

	return (str);
}
