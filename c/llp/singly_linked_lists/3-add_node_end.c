#include "lists.h"

/**
 * add_node_end- function
 * @head: input
 * @str: input
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* var declaration */
	char *s;
	unsigned int len;
	list_t *l, *aux;

	/* code */
	l = malloc(sizeof(list_t) * 1);
	if (l != NULL)
	{
		len = 0;
		if (str == NULL)
			s = strdup("(nil)");
		else
		{
			s = strdup(str);
			while (str[len] != '\0')
				len++;
		}
		if (s == NULL)
			free(l);
		else
		{
			l->str = s;
			l->len = len;
			l->next = NULL;
			if (head != NULL && (*head) != NULL)
			{
				aux = *head;
				while (aux->next != NULL)
					aux = aux->next;
				aux->next = l;
			}
			else
				(*head) = l;
			return (l);
		}
	}
	return (NULL);
}
