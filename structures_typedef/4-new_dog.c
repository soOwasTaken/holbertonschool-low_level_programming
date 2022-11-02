#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * dog_t *new_dog - init struct of dog
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: dog description
 * return: NA
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
