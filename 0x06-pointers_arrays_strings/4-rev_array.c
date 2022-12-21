#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: string
 * @n: length
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (n-- > i)
	{
		int tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
		i++;
	}
}
