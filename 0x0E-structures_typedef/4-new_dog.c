#include "dog.h"
#include <stdlib.h>
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
	int i;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name != NULL && owner != NULL)
	{
		dog_name = malloc(sizeof(char) * (str_len(name) + 1));
		if (dog_name == NULL)
			return (NULL);
		owner_name = malloc(sizeof(char) * (str_len(owner) + 1));
		if (owner_name == NULL)
			return (NULL);
		for (i = 0; name[i] != '\0'; i++)
			dog_name[i] = name[i];
		for (i = 0; owner[i] != '\0'; i++)
		       owner_name[i] = owner[i];
		(*new_dog).name = name;
		new_dog->owner = owner;
		new_dog->age = age;

		free(dog_name);
		free(owner_name);
		return (new_dog);
	}
	return (NULL);
}

/**
 * str_len - Get the length of a given string
 * @s: A pointer to the string
 *
 * Return: The lenght
 */
int str_len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
