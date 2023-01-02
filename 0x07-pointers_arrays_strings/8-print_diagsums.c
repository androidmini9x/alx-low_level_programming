#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers.
 * @a: array of char
 * @size: length
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int first_dia = 0;
	int second_dia = 0;

	for (i = 0; i < size; i++)
	{
		first_dia += a[i * size + i];
		second_dia += a[(i + 1) * size - i - 1];
	}

	printf("%d, %d\n", first_dia, second_dia);
}
