#include "hash_tables.h"

/**
 * hash_table_get- function
 * @ht: input
 * @key: input
 * Return: char *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* var declaration */
	unsigned long int pos;
	hash_node_t *nd;

	/* code */
	if (ht != NULL)
	{
		pos = key_index((unsigned char *) key, ht->size);
		nd = ht->array[pos];
		while (nd != NULL && (strcmp(nd->key, key) != 0))
			nd = nd->next;
		if (nd == NULL)
			return (NULL);
		else
			return (nd->value);
	}
	else
		return (NULL);
}
