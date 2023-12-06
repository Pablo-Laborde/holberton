#ifndef dog_h
#define dog_h

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog- struct
 * @name: name
 * @age: age
 * @owner: owner
 * Description: some text
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

#endif
