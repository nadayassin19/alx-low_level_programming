#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 *
 * @ht: pointer to the hash table
 * 
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *ph;

	if (ht == NULL)
		return;

	printf("{");
	ph = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", ph, tmp->key, tmp->value);
			ph = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
