#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: int
 * @size: int
 * Return: pointer*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *buffer;

	if (nmemb == 0 || size == 0)
		return (0);

	buffer = malloc(nmemb * size);

	if (buffer == NULL)
		return (0);

	i = 0;
	while (i < (nmemb * size))
	{
		*(buffer + i) = 0;
		i++;
	}

	return (buffer);
}
