#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: pointer to the hash table to print.
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hashnode;
	unsigned long int i;
	unsigned char f = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (f == 1)
				printf(", ");

			hashnode = ht->array[i];
			while (hashnode != NULL)
			{
				printf("'%s': '%s'", hashnode->key, hashnode->value);
				hashnode = hashnode->next;
				if (hashnode != NULL)
					printf(", ");
			}
			f = 1;
		}
	}
	printf("}\n");
}
