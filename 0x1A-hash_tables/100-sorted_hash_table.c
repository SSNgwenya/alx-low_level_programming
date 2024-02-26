#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: size of new sorted hash table.
 * Return: NULL in error, else, pointer to new soorted has table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds elements to a sorted hash table.
 * @ht: pointer to the sorted hash table.
 * @key: key to add - must not be an empty string.
 * @value: value associated with key.
 * Return: 0 in failure, else, 1.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *n, *r;
	char *x;
	unsigned long int j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	x = strdup(value);
	if (x == NULL)
		return (0);

	j = key_index((const unsigned char *)key, ht->size);
	r = ht->shead;
	while (r)
	{
		if (strcmp(r->key, key) == 0)
		{
			free(r->value);
			r->value = x;
			return (1);
		}
		r = r->snext;
	}

	n = malloc(sizeof(shash_node_t));
	if (n == NULL)
	{
		free(x);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(x);
		free(n);
		return (0);
	}
	n->value = x;
	n->next = ht->array[j];
	ht->array[j] = n;

	if (ht->shead == NULL)
	{
		n->sprev = NULL;
		n->snext = NULL;
		ht->shead = n;
		ht->stail = n;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		n->sprev = NULL;
		n->snext = ht->shead;
		ht->shead->sprev = n;
		ht->shead = n;
	}
	else
	{
		r = ht->shead;
		while (r->snext != NULL && strcmp(r->snext->key, key) < 0)
			r = r->snext;
		n->sprev = r;
		n->snext = r->snext;
		if (r->snext == NULL)
			ht->stail = n;
		else
			r->snext->sprev = n;
		r->snext = n;
	}

	return (1);
}

/**
 * shash_table_get - fetches value associated with
 *                   a key in a sorted hash table.
 * @ht: pointer to the sorted hash table.
 * @key: key to get the value of.
 * Return: NULL If key cannot be matched
 *         else, value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *hashnode;
	unsigned long int j;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	j = key_index((const unsigned char *)key, ht->size);
	if (j >= ht->size)
		return (NULL);

	hashnode = ht->shead;
	while (hashnode != NULL && strcmp(hashnode->key, key) != 0)
		hashnode = hashnode->snext;

	return ((hashnode == NULL) ? NULL : hashnode->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: pointer to sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *hashnode;

	if (ht == NULL)
		return;

	hashnode = ht->shead;
	printf("{");
	while (hashnode != NULL)
	{
		printf("'%s': '%s'", hashnode->key, hashnode->value);
		hashnode = hashnode->snext;
		if (hashnode != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *hashnode;

	if (ht == NULL)
		return;

	hashnode = ht->stail;
	printf("{");
	while (hashnode != NULL)
	{
		printf("'%s': '%s'", hashnode->key, hashnode->value);
		hashnode = hashnode->sprev;
		if (hashnode != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *hashnode, *r;

	if (ht == NULL)
		return;

	hashnode = ht->shead;
	while (hashnode)
	{
		r = hashnode->snext;
		free(hashnode->key);
		free(hashnode->value);
		free(hashnode);
		hashnode = r;
	}

	free(head->array);
	free(head);
}
