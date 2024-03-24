#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a variable of type struct dog
 * @name: string containing name of the dog
 * @age: string containing age of the dog
 * @owner: string containing name of the owner of the dog
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		d = malloc(sizeof(struct dog));
		if (d == 0)
			return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
