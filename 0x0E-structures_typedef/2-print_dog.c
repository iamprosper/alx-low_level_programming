#include "dog.h"
#include <stdio.h>
/**
 * print_dog - A function that print a dog
 * @d: A pointer to the dog structure
 */
void print_dog(struct dog *d)
{
	float *age_pt;

	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	printf("Age: ");
	age_pt = &(d->age);
	if (age_pt != NULL)
		printf("%.1f\n", d->age);
	else
		printf("(nil)\n");

	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
