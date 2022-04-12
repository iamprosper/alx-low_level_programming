#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - A function that frees dogs
 * @d: A pointer to a the dog structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		d->name != NULL ? free(d->name) : return;
		d->owner != NULL ? free(d->owner) : return;
		free(d);
		EXIT_SUCCESS;
	}
}
