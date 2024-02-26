#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 * Return: NULL If key can't be matched
 *         else, value associated with key in ht.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hashnode;
	unsigned long int j;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	j = key_index((const unsigned char *)key, ht->size);
	if (j >= ht->size)
		return (NULL);

	hashnode = ht->array[j];
	while (hashnode && strcmp(hashnode->key, key) != 0)
		hashnode = hashnode->next;

	return ((hashnode == NULL) ? NULL : hashnode->value);
}
