#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * you have to store a copy of name and owner
 * return NULL if the function fails
 * @name: pointer to char variable representing name of the dog
 * @owner: pointer to char varaible to rep owner
 * @age: pointer to int variable to rep age of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
/**declare `new_dog_pntr` as a pointer to `dog_t`*/
dog_t *new_dog_pntr;

/**allocate memory for the new `dog_t` struct*/
/**assigns the address of the allocated memory to `new_dog_pntr`*/
new_dog_pntr = (dog_t *)malloc(sizeof(dog_t));

/**check if the memory allocation was a success*/
if  (new_dog_pntr == NULL)
{
return (NULL);
}

/**allocate memory for name string*/
/**assigns the address of the allocated memory as duplicate of name*/
new_dog_pntr->name = strdup(name);

/**in case of malloc failure*/
if(new_dog_pntr == NULL)
{
free(new_dog_pntr);
return (NULL);
}

/**allocate memory for owner string*/
/**assigns the address of the allocated memory as duplicate of owner*/
new_dog_pntr->owner = strdup(owner);

/**in case of malloc failure always free memory not in use*/
if(new_dog_pntr->owner == NULL)
{
free(new_dog_pntr->owner);
return (NULL);
}

/**allocate memory for age*/
new_dog_pntr->age = age;

/**return pointer to the new dog struct*/
return (new_dog_pntr);
}



