#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Allocates memory and stores copies of name and owner.
 * Returns NULL if memory allocation fails.
 *
 * Return: pointer to new dog_t struct, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *name_copy, *owner_copy;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	if (name != NULL)
	{
		name_copy = strdup(name);
		if (name_copy == NULL)
		{
			free(newdog);
			return (NULL);
		}
	}
	else
		name_copy = NULL;

	if (owner != NULL)
	{
		owner_copy = strdup(owner);
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(newdog);
			return (NULL);
		}
	}
	else
		owner_copy = NULL;

	newdog->name = name_copy;
	newdog->age = age;
	newdog->owner = owner_copy;

	return (newdog);
}
