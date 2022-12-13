#include "main.h"
/**
 * Check is char is lower
 *
 * Return: 1 if lower, or 0 for non-lower
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
