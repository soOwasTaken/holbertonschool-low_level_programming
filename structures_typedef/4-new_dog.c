#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * *new_dog - init struct of dog
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	new_dog->age = age;

	if (owner == NULL)
	{
		free(new_dog);
		free(new_dog->owner);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_dog->owner == NULL)
		return (NULL);
	strcpy(new_dog->owner, owner);
	if (new_dog == NULL)
		free(new_dog);
        return (NULL);
	return (new_dog);
}
