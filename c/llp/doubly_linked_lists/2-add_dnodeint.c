#include "lists.h"

/**
 * add_dnodeint- function
 * @head: input
 * @n: input
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* var declaration */
	dlistint_t *l;

	/* code */
	l = malloc(sizeof(dlistint_t) * 1);
	if (l != NULL)
	{
		l->n = n;
		l->prev = NULL;
		if (*head != NULL)
		{
			(*head)->prev = l;
			l->next = *head;
		}
		else
			l->next = NULL;
		*head = l;
		return (l);
	}
	else
		return (NULL);
}
