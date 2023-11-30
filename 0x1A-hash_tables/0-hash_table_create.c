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

/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size);

/* Function Definitions */

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table = NULL;
    unsigned long int i;

    /* Allocate memory for the hash table structure */
    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return (NULL);

    /* Allocate memory for the array of pointers to nodes */
    new_table->array = malloc(sizeof(hash_node_t *) * size);
    if (new_table->array == NULL)
    {
        free(new_table);
        return (NULL);
    }

    new_table->size = size;

    /* Initialize each element of the array to NULL */
    for (i = 0; i < size; i++)
        new_table->array[i] = NULL;

    return (new_table);
}

/* Example Usage */

int main(void)
{
    hash_table_t *ht;

    /* Create a hash table with size 10 */
    ht = hash_table_create(10);

    if (ht == NULL)
    {
        fprintf(stderr, "Error creating hash table\n");
        return (EXIT_FAILURE);
    }

    /* Your code to use the hash table goes here */

    return (EXIT_SUCCESS);
}

