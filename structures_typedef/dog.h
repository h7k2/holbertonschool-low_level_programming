#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that defines a dog
 * @name: name of the dog (string)
 * @age: age of the dog (float)
 * @owner: owner of the dog (string)
 *
 * Description: Structure to store dog information.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
