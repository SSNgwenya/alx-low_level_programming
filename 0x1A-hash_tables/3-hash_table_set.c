#include "hash_tables.h"

/**
 * hash_table_set - Add/update elements in a hash table.
 * @ht: pointer to the hash table.
 * @key: key to add - must not be an empty string.
 * @value: value associated with key.
 * Return: 0 Upon failure, else 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *q;
	unsigned long int d, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	q = strdup(value);
	if (q == NULL)
		return (0);

	d = key_index((const unsigned char *)key, ht->size);
	for (i = d; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = q;
			return (1);
		}
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(q);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = q;
	n->next = ht->array[d];
	ht->array[d] = n;

	return (1);
}
