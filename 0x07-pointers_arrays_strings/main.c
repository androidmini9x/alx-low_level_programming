#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "worldw";
    char *f = "dorld";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
