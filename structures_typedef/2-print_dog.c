#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - init struct of dog
 * @d: pointer to struct
 *
 * Description: dog description
 * return: dog value
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s", d->name);
		else
			printf("Name: (nil)");
		if (d->age)
			printf("\nAge: %f", d->age);
		else
			printf("\nAge: (nil)");
		if (d->owner)
			printf("\nOwner: %s\n",  d->owner);
		else
		printf("\nOwner: (nil)\n");
	}
}
