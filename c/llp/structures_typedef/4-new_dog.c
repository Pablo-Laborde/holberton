#include "dog.h"

char *cpystr(char *c);
void free_dog(dog_t *d);

/**
 * new_dog- function
 * @name: input1
 * @age: input2
 * @owner: input3
 * Return: dog_t*
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* var declaration */
	int flag;
	dog_t *d;

	/* code */
	d = malloc(sizeof(dog_t));
	if (d != NULL)
	{
		flag = 1;
		if (name != NULL)
		{
			d->name = cpystr(name);
			if (d->name == NULL)
				flag = 0;
		}
		else
			d->name = NULL;
		d->age = age;
		if (owner != NULL)
		{
			d->owner = cpystr(owner);
			if (d->owner == NULL)
				flag = 0;
		}
		else
			d->owner = NULL;
		if (flag == 0)
			free_dog(d);
	}
	return (d);
}

/**
 * cpystr- function
 * @c: input
 * Return: char*
 */
char *cpystr(char *c)
{
	/* var declaration */
	int i, j;
	char *copy;

	/* code */
	i = 0;
	while (c[i] != '\0')
		i++;
	copy = malloc(sizeof(char) * (i + 1));
	if (copy != NULL)
		for (j = 0; j < (i + 1); j++)
			copy[j] = c[j];
	return (copy);
}

/**
 * free_dog- function
 * @d: input
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
	d = NULL;
}
