#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @key: key
 * @value: value to add
 * Return: 1 if it succeeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *k_copy;
	char *v_copy;
	hash_node_t *node = NULL;
	hash_node_t *current_node = NULL;
	unsigned long int index = 0;

	if (!ht)
		return (0);
	if (!key)
		return (0);
	v_copy = strdup(value);
	k_copy = strdup(key);
	/*Creates a key value pair node*/
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = k_copy;
	node->value = v_copy;
	node->next = NULL;
	index = hash_djb2((const unsigned char *)key) % ht->size;
	current_node = ht->array[index];
	if (current_node == NULL)
		/*empty cell*/
		ht->array[index] = node;
	else
		ht->array[0] = node; /* added to the begining of the array*/
	return (1);
}
