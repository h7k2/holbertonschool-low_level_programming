#include "dog.h"
#include <stdlib.h>
#include "str_dup.c"
/**
 * new_dog - creates a new dog_t struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog or NULL if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy;
	char *owner_copy;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	name_copy = str_dup(name);
	if (name && !name_copy)
	{
		free(dog);
		return (NULL);
	}

	owner_copy = str_dup(owner);
	if (owner && !owner_copy)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
