#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog_t structure.
 * @d: Pointer to the dog_t structure to be freed.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

/*Free the dynamically allocated memory for name and owner*/
free(d->name);
free(d->owner);

/*Free the memory allocated for the dog structure itself*/
free(d);
}
