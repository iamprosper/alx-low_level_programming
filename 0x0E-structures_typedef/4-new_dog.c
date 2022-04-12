#include "dog.h"
#include "stdlib.h"
/**
 * new_dog - A function that create a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *dog_name;
	char *owner_name;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name != NULL && owner != NULL)
	{
		dog_name = name;
		owner_name = owner;
		new_dog->name = dog_name;
		new_dog->owner = owner_name;
		new_dog->age = age;
		return (new_dog);
	}
	return (NULL);
}
