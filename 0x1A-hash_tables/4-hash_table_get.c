#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key to scan for
 * Return: value or NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp = NULL;
	unsigned long int idx;

	if (!ht || !ht->array || !key || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
