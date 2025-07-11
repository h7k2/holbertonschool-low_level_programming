#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints the elements of a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: Prints name, age, and owner of the dog.
 * If an element is NULL, prints (nil) instead.
 * If d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
