#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: String
 * @f: ptr to func
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
