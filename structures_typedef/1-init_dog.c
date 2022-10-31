#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - init struct of dog
 * @d: pointer to struct
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: dog description
 * return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name
		d->age = age;
		d->owner = owner;
	}
}
