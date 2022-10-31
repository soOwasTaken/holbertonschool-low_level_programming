#ifndef dog_h
#define dog_h
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - information of the dog
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: dog description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* dog_h */
