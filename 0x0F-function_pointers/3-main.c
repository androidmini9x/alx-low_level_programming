#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Starter Point
 * @argc: arg count
 * @argv: array of arg
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (argv[2] == NULL || *(argv[2] + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	func = get_op_func(op);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
