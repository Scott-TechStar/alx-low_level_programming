/*
 * File: 0-hash_table_create.c
 * Auth: John Mwadime
 */

#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */

// Function to create a hash table
hash_table_t *hash_table_create(unsigned long int size) {
    // Allocate memory for the hash table
    hash_table_t *hash_table_s = (hash_table_t *)malloc(sizeof(hash_table_t));
    if (hash_table_s == NULL) {
        return NULL; // Return NULL if memory allocation failed
    }

    // Allocate memory for the array of linked lists
    hash_table_s->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
    if (hash_table_s->array == NULL) {
        free(hash_table_s);
        return NULL; // Return NULL if memory allocation failed
    }

    hash_table_s->size = size; // Set the size of the hash table

    return hash_table_s;
}
