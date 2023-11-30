#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Structures */

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key (string)
 * @value: The value associated with the key
 * @next: A pointer to the next node in the collision resolution chain
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of pointers to nodes
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/* Function Prototypes */
hash_table_t *hash_table_create(unsigned long int size);

#endif
