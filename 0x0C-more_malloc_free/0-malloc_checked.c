#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: int
 * Return: int
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return  (ptr);
}
