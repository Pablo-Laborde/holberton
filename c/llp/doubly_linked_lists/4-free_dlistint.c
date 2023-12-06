#include "lists.h"

/**
 * free_dlistint- function
 * @head: input
 * Return: dlistint
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
