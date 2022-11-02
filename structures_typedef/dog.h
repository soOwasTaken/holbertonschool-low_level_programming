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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* dog_h */
