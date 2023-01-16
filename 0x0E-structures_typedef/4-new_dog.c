#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: struct dog
 * @age: int
 * @owner: string
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i = 0;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(strlen(name) + 1);
	if (n_dog->name == NULL)
		return (NULL);
	while (*(name + i) != '\0')
	{
		*(n_dog->name + i) = *(name + i);
		i++;
	}
	*(n_dog->name + i) = '\0';
	n_dog->age = age;
	n_dog->owner = malloc(strlen(name) + 1);
	if (n_dog->owner == NULL)
		return (NULL);
	i = 0;
	while (*(owner + i) != '\0')
	{
		*(n_dog->owner + i) = *(owner + i);
		i++;
	}
	return (n_dog);
}
