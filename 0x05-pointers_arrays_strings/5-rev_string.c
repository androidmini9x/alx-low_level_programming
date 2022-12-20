#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the pointer of the string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	while (len-- > i)
	{
		char tmp = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = tmp;
		i++;
	}
}
