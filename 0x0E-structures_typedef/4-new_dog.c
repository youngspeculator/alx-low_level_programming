#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created dog_t struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr;
char *name_copy, *owner_copy;

/*Allocate memory for the new dog structure*/
new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);
/*Allocate memory and copy the name*/
name_copy = strdup(name);
if (name_copy == NULL)
{
free(new_dog_ptr);
return (NULL);
}
/*Allocate memory and copy the owner*/
owner_copy = strdup(owner);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog_ptr);
return (NULL);
}
/*Initialize the new dog structure*/

new_dog_ptr->name = name_copy;
new_dog_ptr->age = age;
new_dog_ptr->owner = owner_copy;

return (new_dog_ptr);
}
