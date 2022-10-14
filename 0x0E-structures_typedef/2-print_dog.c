#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  prints a struct dog.
 * If an element of d is NULL, print (nil) instead of this element.
 * If d is NULL print nothing.
 *
 * @d: struct variable.
 * Return: 0.
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
