#include "hash_tables.h"

/**
 * key_index - the give the index of a key
 *
 * @size: size of the hash table
 *
 * @key: The key to get the index of
 *
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
