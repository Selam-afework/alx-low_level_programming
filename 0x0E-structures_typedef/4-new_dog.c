#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);


/**
 * new_dog - creates new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: my_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	int name1 = 0, own1 = 0;

	if (name != NULL && owner != NULL)
	{
		name1 = _strlen(name) + 1;
		own1 = _strlen(owner) + 1;
		my_dog = malloc(sizeof(dog_t));

		if (my_dog == NULL)
		{
			return (NULL);
		}
		my_dog->name = malloc(sizeof(char) * name1);

		if (my_dog->name == NULL)
		{
			free(my_dog);
			return (NULL);
		}
		my_dog->owner = malloc(sizeof(char) * own1);

		if (my_dog->owner == NULL)
		{
			free(my_dog->name);
			free(my_dog);
			return (NULL);
		}
		my_dog->name = _strcpy(my_dog->name, name);
		my_dog->owner = _strcpy(my_dog->owner, owner);
		my_dog->age = age;
	}
	return (my_dog);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: string to count
 *
 * Return: c string length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; (*s != '\0'); s++)
	{
		c++;
	}
	return (c);
}

/**
 * _strcpy - copy a string
 *
 * @dest: destination value
 * @src: source value
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
