#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: pointer to a hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *hashnode, *r;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			hashnode = ht->array[x];
			while (hashnode != NULL)
			{
				r = hashnode->next;
				free(hashnode->key);
				free(hashnode->value);
				free(hashnode);
				hashnode = r;
			}
		}
	}
	free(head->array);
	free(head);
}
