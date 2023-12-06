#include "lists.h"

/**
 * print_dlistint- function
 * @h: input
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	/* var declaration */
	size_t count;

	/* code */
	count = 0;
	if (h != NULL)
	{
		count += print_prev(h->prev);
		printf("%i\n", h->n);
		count++;
		count += print_next(h->next);
	}
	return (count);
}

/**
 * print_prev- function
 * @h: input
 * Return: size_t
 */
size_t print_prev(const dlistint_t *h)
{
	/* var declaration */
	size_t count;

	/* code */
	if (h != NULL)
	{
		count = 1 + print_prev(h->prev);
		printf("%i\n", h->n);
		return (count);
	}
	else
		return (0);
}

/**
 * print_next- function
 * @h: input
 * Return: size_t
 */
size_t print_next(const dlistint_t *h)
{
	/* var declaration */
	size_t count;

	/* code */
	if (h != NULL)
	{
		printf("%i\n", h->n);
		count = 1 + print_next(h->next);
		return (count);
	}
	else
		return (0);
}
