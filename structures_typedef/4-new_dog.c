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
	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(name);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	new_dog->age = age;
	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (owner == NULL)
	{
		free(owner);
		free(new_dog);
		return (NULL);
	}
	if (new_dog == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	return (new_dog);
}
