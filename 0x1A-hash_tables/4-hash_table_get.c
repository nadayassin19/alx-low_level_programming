#include "hash_tables.h"

/**
 *hash_table_get - retrieves a value associated with a key
 *
 *@htp: pointer to the hash table
 *
 *@key: key of the hash
 *
 *Return: value of the hash.
 */
char *hash_table_get(const hash_table_t *htp, const char *key)
{
	unsigned long int k_index;
	hash_node_t *tmp;

	if (htp == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k_index = key_index((unsigned char *)key, htp->size);

	tmp = htp->array[k_index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
