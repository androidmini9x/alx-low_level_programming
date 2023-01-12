#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer*
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (0);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (0);

	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}

	return (arr);
}
