#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: typedef of the struct dog
 * you are not allowed to use the standard library
 * if an element of d id NULL, print (nil) instead of this element
 * if name is NULL, print Name:(nil)
 * if d is NULL print nothing
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: %s\n", d->name != 0 ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != 0 ? d->owner : "(nil)");
	}
}
