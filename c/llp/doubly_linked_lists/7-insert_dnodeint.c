#include "lists.h"

/**
 * insert_dnodeint_at_index- function
 * @h: input
 * @idx: input
 * @n: input
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* var declaration */
	unsigned int pos;
	dlistint_t *l, *aux;

	/* code */
	if (h == NULL || *h == NULL || idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		aux = *h;
		pos = 0;
		while (aux->next != NULL && pos < (idx - 1))
		{
			aux = aux->next;
			pos++;
		}
		if (pos == (idx - 1))
		{
			if (aux->next != NULL)
			{
				l = malloc(sizeof(dlistint_t) * 1);
				if (l != NULL)
				{
					l->n = n;
					l->next = aux->next;
					l->prev = aux;
					aux->next->prev = l;
					aux->next = l;
				}
				return (l);
			}
			else
				return (add_dnodeint_end(h, n));
		}
		else
			return (NULL);
	}
}
