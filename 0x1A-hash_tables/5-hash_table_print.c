#include "hash_tables.h"

/**
 * hash_table_print - A function to print the hash table
 *
 * @ht: hashTable to be printed
 *
 * Return: Nothing (void)
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int m;
	hash_node_t *temp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (m = 0; m < ht->size; m++)
	{
		temp = ht->array[m];
		while (temp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
