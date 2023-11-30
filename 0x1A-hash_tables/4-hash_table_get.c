#include "hash_tables.h"

/**
 * hash_table_get - retrive a value from a key
 *
 * @ht: table to work from
 *
 * @key: to find the value, used as an index
 *
 * Return: value combined with key, NULL is key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indexm;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	indexm = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[indexm];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
