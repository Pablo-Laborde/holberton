#include "dog.h"

/**
 * free_dog- function
 * @d: input
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
		d = NULL;
	}
}
