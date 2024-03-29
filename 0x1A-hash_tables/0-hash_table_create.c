#include "hash_tables.h"

/**
 *  hash_table_create - Creates a hash table
 *
 *  @size: Size of the array
 *
 *  Return: A pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create_table = NULL;
	unsigned long int i;

	create_table = malloc(sizeof(hash_table_t));

	if (create_table == NULL)
	{
		return (NULL);
	}
	create_table->size = size;
	create_table->array = malloc(sizeof(hash_node_t *) * size);

	if (create_table->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		create_table->array[i] = NULL;

	return (create_table);
}
