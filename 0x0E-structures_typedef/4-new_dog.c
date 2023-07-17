#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 *
 * @name: the name of the dog.
 *
 * @age: the age of the dog.
 *
 * @owner: the owner's name of the dog.
 *
 * Return: struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d_dog;
	int i, n_name, n_owner;

	d_dog = malloc(sizeof(*d_dog));
	if (d_dog == NULL || !(name) || !(owner))
	{
		free(d_dog);
		return (NULL);
	}

	for (n_name = 0; name[n_name]; n_name++)
		;

	for (n_owner = 0; owner[n_owner]; n_owner++)
		;

	d_dog->name = malloc(n_name + 1);
	d_dog->owner = malloc(n_owner + 1);

	if (!(d_dog->name) || !(d_dog->owner))
	{
		free(d_dog->owner);
		free(d_dog->name);
		free(d_dog);
		return (NULL);
	}

	for (i = 0; i < n_name; i++)
		d_dog->name[i] = name[i];
	d_dog->name[i] = '\0';

	d_dog->age = age;

	for (i = 0; i < n_owner; i++)
		d_dog->owner[i] = owner[i];
	d_dog->owner[i] = '\0';

	return (d_dog);
}
