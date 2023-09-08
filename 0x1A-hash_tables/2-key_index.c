#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: Pointer to the key.
 * @size: Size of the hash table.
 *
 * Return: The index of the key in the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;

	idx = hash_djb2(key);
	idx %= size;

	return (idx);
}
