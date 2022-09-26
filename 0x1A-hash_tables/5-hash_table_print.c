#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int idx;
	char *sepr = "";

	if (!ht || !ht->array)
		return;
	putchar('{');
	for (idx = 0 ; idx < ht->size ; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			printf("%s'%s': '%s'", sepr, node->key, node->value);
			sepr = ", ";
			node = node->next;
		}
	}
	puts("}");
}
