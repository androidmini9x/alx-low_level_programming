#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer*
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *arr;

	if (min > max)
		return (0);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
