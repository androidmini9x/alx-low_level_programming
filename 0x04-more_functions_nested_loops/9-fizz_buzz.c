#include "main.h"
#include <stdio.h>
/**
 * main - starting point of our app
 *
 * Return: int
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; ++i)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("100\n");

	return (0);
}
