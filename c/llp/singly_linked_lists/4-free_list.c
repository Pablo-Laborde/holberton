#include "lists.h"

/**
 * free_list- function
 * @head: input
 * Return: void
 */
void free_list(list_t *head)
{
	/* code */
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
