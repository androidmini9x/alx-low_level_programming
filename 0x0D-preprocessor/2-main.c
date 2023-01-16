#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from
 * Return: int
 */
int main(void)
{
	printf(__BASE_FILE__);
	printf("\n");

	return (0);
}
