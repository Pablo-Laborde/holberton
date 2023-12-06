#include "lists.h"

/**
 * add_dnodeint_end- function
 * @head: input
 * @n: input
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* var declaration */
	dlistint_t *l, *aux;

	/* code */
	l = malloc(sizeof(dlistint_t) * 1);
	if (l != NULL)
	{
		l->n = n;
		l->next = NULL;
		if (head == NULL || (*head) == NULL)
		{
			l->prev = *head;
			*head = l;
		}
		else
		{
			aux = *head;
			while (aux->next != NULL)
				aux = aux->next;
			aux->next = l;
			l->prev = aux;
		}
		return (l);
	}
	else
		return (NULL);
}
