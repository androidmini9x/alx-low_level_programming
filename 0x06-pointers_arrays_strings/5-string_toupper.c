#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string
 * Return: Void
 */
char *string_toupper(char *str)
{
	int i = 0;
	char c;

	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c >= 97 && c <= 122)
			*(str + i) = 'A' + (c - 'a');
		i++;
	}

	return (str);
}

