#include "hash_tables.h"

/**
 * key_index - This gets the index for a key/value
 *     The fetched pair should be stored in array of a hash table.
 *key: The key to get the index of.
 *size: The size of the array of the hash table.
 *
 * Return: This fetches the index of the key.
 * Description: These codes uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
