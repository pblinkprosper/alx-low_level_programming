#include "hash_tables.h"

/**
 *  hash_table_get - Retrieves a value associated with a key.
 *  @ht: The hash table you want to look into
 *  @key: The value you are lookg for
 *
 *  Return: A pointer to the newly created hash table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	node = ht->array[idx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
