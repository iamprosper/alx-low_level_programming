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

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name != NULL && owner != NULL)
	{
		/*dog_name = malloc(sizeof(char) * (str_len(name) + 1));
		*owner_name = malloc(sizeof(char) * (str_len(owner) + 1));
		*if (dog_name == NULL || owner_name == NULL)
		*	return (NULL);
		*/
		dog_name = name;
		owner_name = owner;
		(*new_dog).name = dog_name;
		new_dog->owner = owner_name;
		new_dog->age = age;

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
