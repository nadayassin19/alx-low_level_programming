#include "hash_tables.h"

/**
 * shash_table_create - creates a shash table with a given size
 *
 * @size: size of the shash table
 *
 * Return: the created shash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * add_n_shash - adds a node at the beginning of a shash at a given index
 *
 * @h: head of the shash linked list
 *
 * @key: key of the shash
 *
 * @value: value to store
 *
 * Return: created node
 */
shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *tmp;

	tmp = *h;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(shash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *h;

	*h = tmp;

	return (tmp);
}

/**
 * add_i_shash - adds a node on the DLL of the shash table
 *
 * @htp: pointer to the table
 *
 * @new: new node to add
 *
 * Return: nothing
 */
void add_i_shash(shash_table_t *htp, shash_node_t *new)
{
	shash_node_t *tmp1, *tmp2;
	int ret;

	tmp1 = tmp2 = htp->shead;

	while (tmp1 != NULL)
	{
		ret = strcmp(new->key, tmp1->key);
		if (ret == 0)
		{
			return;
		}
		else if (ret < 0)
		{
			new->sprev = tmp1->sprev;

			if (tmp1->sprev)
				tmp1->sprev->snext = new;
			else
				htp->shead = new;

			tmp1->sprev = new;
			new->snext = tmp1;

			return;
		}
		tmp2 = tmp1;
		tmp1 = tmp1->snext;
	}

	new->sprev = tmp2;
	new->snext = NULL;

	if (htp->shead)
		tmp2->snext = new;
	else
		htp->shead = new;

	htp->stail = new;
}

/**
 * shash_table_set - adds a hash (key, value) to a given shash table
 *
 * @htp: pointer to the shash table
 *
 * @key: key of the shash
 *
 * @value: value to store
 *
 * Return: 1 if successes, 0 if fails
 */
int shash_table_set(shash_table_t *htp, const char *key, const char *value)
{
	unsigned long int k_index;
	shash_node_t *new;

	if (htp == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_index = key_index((unsigned char *)key, htp->size);

	new = add_n_shash(&(htp->array[k_index]), key, value);

	if (new == NULL)
		return (0);

	add_i_shash(htp, new);

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 *
 * @htp: pointer to the shash table
 *
 * @key: key of the shash
 *
 * Return: value of the shash.
 */
char *shash_table_get(const shash_table_t *htp, const char *key)
{
	unsigned long int k_index;
	shash_node_t *tmp;

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

/**
 * shash_table_print - prints the keys and values of the shash table
 *
 * @htp: pointer to the shash table
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *htp)
{
	shash_node_t *tmp;
	char *sep;

	if (htp == NULL)
		return;

	printf("{");
	sep = "";

	tmp = htp->shead;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints the keys and values of the shash table
 * in reverse
 *
 * @htp: pointer to the shash table
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *htp)
{
	shash_node_t *tmp;
	char *sep;

	if (htp == NULL)
		return;

	printf("{");
	sep = "";

	tmp = htp->stail;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a shash table
 *
 * @htp: pointer to the shash table
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *htp)
{
	unsigned long int i;
	shash_node_t *tmp1;
	shash_node_t *tmp2;

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
