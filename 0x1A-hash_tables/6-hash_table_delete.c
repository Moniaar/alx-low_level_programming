#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 *
 * @ht: The hash table to be deleted
 *
 * Return: Nothing (Void)
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int m;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (m = 0; m < ht->size; m++)
	{
		while (ht->array[m] != NULL)
		{
			next = ht->array[m]->next;
			free(ht->array[m]->key);
			free(ht->array[m]->value);
			free(ht->array[m]);
			ht->array[m] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
