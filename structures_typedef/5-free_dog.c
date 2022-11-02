#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - init struct of dog
 * @d: pointer
 * Return: success
 */

void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->owner);
	free(d->name);
	free(d);
	}
}
