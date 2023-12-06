#include "lists.h"

/**
 * dlistint_len- function
 * @h: input
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	/* var declaration */

	/* code */
	if (h == NULL)
		return (0);
	else
		return (1 + count_prev(h->prev) + count_next(h->next));
}

/**
 * count_prev- function
 * @h: input
 * Return: size_t
 */
size_t count_prev(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (1 + count_prev(h->prev));
}

/**
 * count_next- function
 * @h: input
 * Return: size_t
 */
size_t count_next(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (1 + count_next(h->next));
}
