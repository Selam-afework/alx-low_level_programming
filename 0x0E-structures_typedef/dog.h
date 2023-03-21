#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog attributes
 *
 * @name: dog name
 * @age: dog age
 * @owner: do owner
 *
 * description: dog attribution
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef dor struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
