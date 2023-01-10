#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string into words;
 * @str: string
 * Return: char
 */
char **strtow(char *str)
{
	int i;
	int j;
	int k;
	int c;
	int word_count = 0;
	int word_len = 0;
	char **str_arr;

	if (str == NULL || strcmp(str, "") == 0)
		return (0);

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != ' ')
		{
			while (*(str + i) != '\0' && *(str + i) != ' ')
			{
				i++;
			}
			word_count++;
			i--;
		}
		i++;
	}

	if (word_count == 0)
		return (0);

	str_arr = malloc(sizeof(char *) * (word_count + 1));

	if (str == NULL)
		return (0);

	i = 0;
	j = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) != ' ')
		{
			word_len = 0;

			while (*(str + i) != '\0' && *(str + i) != ' ')
			{
				word_len++;
				i++;
			}

			str_arr[j] = malloc(sizeof(char) * (word_len + 1));

			if (str_arr[j] == NULL)
			{
				for (i = 0; i < j; i++)
					free(str_arr[j]);
				free(str_arr);

				return (0);
			}

			c = 0;
			for (k = i - word_len; k < i; k++)
			{
				str_arr[j][c++] = *(str + k);
			}
			str_arr[j][c++] = '\0';

			j++;
			i--;
		}
		i++;
	}

	str_arr[j] = NULL;

	return (str_arr);
}
