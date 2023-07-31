#include "lists.h"

/**
 * free_linkedlist - frees a linked list
 *
 * @head: head of a list.
 *
 * Return: nothing.
 */

void free_linkedlist(linkedlist_t **head)
{
	linkedlist_t *temp;
	linkedlist_t *temp2;

	if (head != NULL)
	{
		temp2 = *head;
		while ((temp = temp2) != NULL)
		{
			temp2 = temp2->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 *
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n_nodes = 0;
	linkedlist_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(linkedlist_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_linkedlist(&hptr);
				return (n_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n_nodes++;
	}

	free_linkedlist(&hptr);
	return (n_nodes);
}
