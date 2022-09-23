#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table, or NULL otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_ptr;
	hash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);
	hash_table_ptr = malloc(sizeof(hash_table_t));
	if (!hash_table_ptr)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(hash_table_ptr);
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
		array[i] = NULL; /* Intialize each cell of the array to NULL */
	hash_table_ptr->size = size;
	hash_table_ptr->array = array;
	return (hash_table_ptr);
}
