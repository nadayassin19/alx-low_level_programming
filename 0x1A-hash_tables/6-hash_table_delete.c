#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table
 *
 *@htp: pointer to the hash table
 *
 *Return: nothing.
 */
void hash_table_delete(hash_table_t *htp)
{
	unsigned long int i;
	hash_node_t *tmp1;
	hash_node_t *tmp2;

	if (htp == NULL)
		return;

	for (i = 0; i < htp->size; i++)
	{
		tmp1 = htp->array[i];
		while ((tmp2 = tmp1) != NULL)
		{
			tmp1 = tmp1->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(htp->array);
	free(htp);
}
