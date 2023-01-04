#include "main.h"
int helper(int num, int base);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (helper(1, n));
}
/**
 * helper - return the square root for the base
 * @num: number
 * @base: number
 * Return: int
 */
int helper(int num, int base)
{
	if (num * num == base)
		return (num);
	if (num * num > base)
		return (-1);

	return (helper(num + 1, base));
}
