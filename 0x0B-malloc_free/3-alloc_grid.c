#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (0);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (0);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[i]);
			free(arr);
			return (0);
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
