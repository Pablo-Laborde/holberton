#include "lists.h"

/**
 * delete_dnodeint_at_index- function
 * @head: input
 * @index: input
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* var declaration */
	unsigned int pos;
	dlistint_t *aux;

	/* code */
	if (head != NULL && *head != NULL)
	{
		aux = *head;
		if (index == 0)
			*head = aux->next;
		pos = 0;
		while (aux->next != NULL && pos < index)
		{
			aux = aux->next;
			pos++;
		}
		if (pos == index)
		{
			if (aux->next != NULL)
				aux->next->prev = aux->prev;
			if (aux->prev != NULL)
				aux->prev->next = aux->next;
			if (aux->prev == NULL && aux->next == NULL)
				*head = NULL;
			free(aux);
			return (1);
		}
		else
			return (-1);
	}
	else
		return (-1);
}
