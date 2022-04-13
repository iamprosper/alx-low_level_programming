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
	dog_t *new_dog = NULL;
	char *dog_name, *owner_name;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);

	dog_name = malloc(sizeof(char) * (str_len(name) + 1));
	if (dog_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_name = malloc(sizeof(char) * (str_len(owner) + 1));
	if (owner_name == NULL)
	{
		free(dog_name);
		free(new_dog);
		return (NULL);
	}

	dog_name = populate(name, dog_name);
	owner_name = populate(owner, owner_name);
	new_dog->name = dog_name;
	/*printf("new - dog: %i\n", new_dog->name == dog_name);*/
	/*printf("dog - name: %i\n", dog_name == name);*/
	new_dog->owner = owner_name;
	new_dog->age = age;

	return (new_dog);
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

/**
 * populate - Copy String contents
 * @src: The source string
 * @dest: The destination string
 *
 * Return: A pointer to the copied string
 */
char *populate(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	/*dest[i] = '\0';*/
	return (dest);
}
