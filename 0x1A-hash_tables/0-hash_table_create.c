/*
 * File: 0-hash_table_create.c
 * Auth: John Mwadime
 */

#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (size == 0)
		return (NULL);
	if (ht == NULL)
		return (NULL);
	ht->array = (hash_node_t**)malloc(size * sizeof(hash_node_t*));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (unsigned long int i = 0; i < size; i++) {
        ht->array[i] = NULL;
	}
	ht->size = size;
	return (ht);
}
