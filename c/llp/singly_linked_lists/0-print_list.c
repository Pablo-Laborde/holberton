#include "lists.h"

/**
 * print_list- function
 * @h: input
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	/*var declaration */
	list_t *aux;
	size_t count;

	/* code */
	count = 0;
	if (h != NULL)
	{
		aux = h->next;
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		while (aux != NULL)
		{
			if (aux->str == NULL)
				printf("[%u] %s\n", 0, "(nil)");
			else
				printf("[%u] %s\n", aux->len, aux->str);
			aux = aux->next;
			count++;
		}
	}
	return (count);
}
