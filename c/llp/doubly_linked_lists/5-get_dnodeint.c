#include "lists.h"

/**
 * get_dnodeint_at_index- function
 * @head: input
 * @index: input
 * Return: dlistint
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	if (index > 0)
		return (get_dnodeint_at_index(head->next, (index - 1)));
	else
		return (head);
}
