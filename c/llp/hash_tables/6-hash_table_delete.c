#include "hash_tables.h"

/**
 * hash_table_delete- function
 * @ht: input
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	/* var declaration */
	unsigned long int pos, size;

	/* code */
	if (ht)
	{
		size = ht->size;
		for (pos = 0; pos < size; pos++)
			free_list(ht->array[pos]);
		free(ht->array);
		free(ht);
	}
}

/**
 * free_list- function
 * @nd: input
 * Return: void
 */
void free_list(hash_node_t *nd)
{
	if (nd)
	{
		free_list(nd->next);
		free(nd->key);
		free(nd->value);
		free(nd);
	}
}
