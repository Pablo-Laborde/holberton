#include "lists.h"

/**
 * add_node- function
 * @head: input
 * @str: input
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	/* var declaration */
	char *s;
	unsigned int len;
	list_t *l;

	/* code */
	l = malloc(sizeof(list_t) * 1);
	if (l != NULL)
	{
		len = 0;
		if (str == NULL)
			s = strdup("(nil)");
		else
			s = strdup(str);
		if (s == NULL)
		{
			free(l);
			return (NULL);
		}
		while (s[len] != '\0')
			len++;
		l->str = s;
		l->len = len;
		if (head == NULL)
			l->next = NULL;
		else
			l->next = *head;
		*head = l;
		return (l);
	}
	else
		return (NULL);
}
