#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - A function that initalize a variable of type struct dog
 * @d : A pointer to the structure
 * @name: A pointer to the name of the dog
 * @age: The age of the dog
 * @owner: A pointer to the owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	(*d).owner = owner;
}
