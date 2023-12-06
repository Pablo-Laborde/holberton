#include "hash_tables.h"

/**
 * hash_table_print- function
 * @ht: input
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	/* var declaration */
	int flag;
	unsigned long int i, j;
	hash_node_t *nd;

	/* code */
	if (ht)
	{
		j = ht->size;
		flag = 0;
		printf("{");
		for (i = 0; i < j; i++)
		{
			nd = ht->array[i];
			while (nd)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", nd->key, nd->value);
				flag = 1;
				nd = nd->next;
			}
		}
		printf("}\n");
	}
}
