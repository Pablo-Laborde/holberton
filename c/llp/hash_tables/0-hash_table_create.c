#include "hash_tables.h"

/**
 * hash_table_create- function
 * @size: input
 * Return: hash_table_t*
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* var declaration */
	unsigned long int i;
	hash_table_t *ht;

	/* code */
	ht = malloc(sizeof(hash_table_t *) * 1);
	if (ht != NULL)
	{
		ht->size = size;
		ht->array = malloc(sizeof(hash_node_t *) * ht->size);
		if (ht->array)
		{
			for (i = 0; i < size; i++)
				ht->array[i] = NULL;
		}
		else
			free(ht);
	}
	return (ht);
}
