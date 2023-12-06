#include "hash_tables.h"

/**
 * hash_table_set- function
 * @ht: input
 * @key: input
 * @value: input
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* var declaration */
	unsigned long int pos;
	hash_node_t *nd;

	/* code */
	nd = malloc(sizeof(hash_node_t) * 1);
	if (ht != NULL && nd != NULL)
	{
		nd->key = malloc(sizeof(key) * 1);
		if (nd->key == NULL)
			return (free_node(nd));
		nd->value = malloc(sizeof(value) * 1);
		if (nd->value == NULL)
			return (free_node(nd));
		pos = key_index((unsigned char *) key, ht->size);
		strcpy(nd->key, key);
		strcpy(nd->value, value);
		if (ht->array[pos] && (strcmp(nd->key, ht->array[pos]->key) == 0))
		{
			nd->next = ht->array[pos]->next;
			free_node(ht->array[pos]);
			ht->array[pos] = nd;
		}
		else
			nd->next = ht->array[pos];
		ht->array[pos] = nd;
		return (1);
	}
	else
	{
		free(nd);
		return (0);
	}
}

/**
 * free_node- function
 * @nd: input
 * Return: int
 */
int free_node(hash_node_t *nd)
{
	free(nd->key);
	free(nd->value);
	free(nd);
	return (0);
}
