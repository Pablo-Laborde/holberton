#include "lists.h"

/**
 * sum_dlistint- function
 * @head: input
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == 0)
		return (0);
	else
		return (head->n + sum_dlistint(head->next));
}
