#include "hash_tables.h"

/**
 * hash_table_get - This retrieves the value associated with
 *                  a key in a hash table.
 * ht: Is a pointer to the hash table.
 * key: This is a key to fetch the value of.
 *
 * Return: If the key cannot be matched, this will return NULL.
 *         Otherwise - the value associated with key will be returned in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
