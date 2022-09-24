#include "hash_tables.h"
/**
 * add_node - adds a node to the hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 * @idx: index
 * Return: 1 if it succeed or 0 otherwise
 */
int add_node(hash_table_t *ht, const char *key, const char *value,
	unsigned long int idx)
{
	hash_node_t *node = NULL;
	char *v;
	char *k;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	v = strdup(value);
	k = strdup(key);
	if ((!v) && (!k))
	{
		free(node);
		return (0);
	}
	node->key = k;
	node->value = v;
	if ((ht->array)[idx] == NULL)
		node->next = NULL;
	else
		node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value to add
 * Return: 1 if it succeeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node = NULL;
	char *v;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node && strcmp(key, node->key) != 0)
		node = node->next;
	if (node != NULL)
	{
		v = strdup(value);
		if (!v)
			return (0);
		if (node->value)
			free(node->value);
		node->value = v;
		return (1);
	}
	return (add_node(ht, key, value, idx));
}
