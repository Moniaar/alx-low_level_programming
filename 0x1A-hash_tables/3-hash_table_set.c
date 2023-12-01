#include "hash_tables.h"

/**
 * make_newhNode - create a new hash node
 *
 * @key : key for the node
 *
 * @value: for the node
 *
 * Return: the new node, or NULL upon failure
 */

hash_node_t *make_newhNode(const char *key, const char *value)
{
	hash_node_t *Node;

	Node = malloc(sizeof(hash_node_t));
	if (Node == NULL)
		return (NULL);
	Node->key = strdup(key);
	if (Node->key == NULL)
	{
		free(Node);
		return (NULL);
	}
	Node->value = strdup(value);
	if (Node->value == NULL)
	{
		free(Node->key);
		free(Node);
		return (NULL);
	}
	Node->next = NULL;
	return (Node);
}

/**
 * hash_table_set - a function that adds an element to the hash table.
 *
 * @ht: hash table to put elements into
 *
 * @key: key for the data
 *
 * @value: Data to be stored
 *
 * Return: 1 if successful, 0 Otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indexm;
	hash_node_t *temp, *hash_node;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	indexm = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[indexm];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	hash_node = make_newhNode(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[indexm];
	ht->array[indexm] = hash_node;
	return (1);
}
