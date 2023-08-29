#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: head pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
