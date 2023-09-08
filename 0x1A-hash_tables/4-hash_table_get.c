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
	unsigned long int idx = 0;
	hash_node_t *head = NULL;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	idx = hash_djb2((unsigned char *)key) % ht->size;

	if (ht->array[idx] != NULL)
	{
		head = ht->array[idx];

		while (head != NULL)
		{
			if (strcmp(head->key, key) == 0)
			{
				break;
			}
			head = head->next;
		}
	}
	else
	{
		return (NULL);
	}
	return (head->value);
}
