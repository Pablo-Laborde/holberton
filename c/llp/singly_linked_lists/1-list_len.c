#include "lists.h"

/**
 * list_len- function
 * @h: input
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (1 + list_len(h->next));
}
