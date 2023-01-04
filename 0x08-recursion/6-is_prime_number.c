#include "main.h"
int helper(int num, int base);
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	if (n / 2 == 0)
		return (0);
	return (helper(n / 2, n));
}
/**
 * helper - check is number prime or not
 * @num: number
 * @base: number
 * Return: int
 */
int helper(int num, int base)
{
	if (num < 2)
		return (1);
	if (base % num == 0)
		return (0);

	return (helper(num - 1, base));
}

