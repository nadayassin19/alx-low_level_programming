#include "lists.h"

/**
 * free_linkedlist - frees a linked list.
 *
 * @head: head of a list.
 *
 * Return: nothing.
 */

void free_linkedlist(list_t **head)
{
	list_t *temp;
	list_t *temp2;

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
