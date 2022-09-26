#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next_node;
	unsigned long int idx;

	if (!ht)
		return;
	if (!ht->array)
	{
		free(ht);
		return;
	}
	for (idx = 0 ; idx < ht->size ; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			next_node = node->next;
			if (node->key)
				free(node->key);
			if (node->value)
				free(node->value);
			node->key = NULL;
			node->value = NULL;
			free(node);
			node = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
