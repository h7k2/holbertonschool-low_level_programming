#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that defines a dog
 * @name: name of the dog (string)
 * @age: age of the dog (float)
 * @owner: owner of the dog (string)
 *
 * Description: This structure stores basic information about a dog:
 * its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
