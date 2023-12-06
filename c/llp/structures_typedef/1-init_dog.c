#include "dog.h"

/**
 * init_dog- function
 * @d: input1
 * @name: input2
 * @age: input3
 * @owner: input4
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* code */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
