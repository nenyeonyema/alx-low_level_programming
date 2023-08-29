#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list
 * @head: double head pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr =  *head->next;
		free(*head);
		*head = NULL;
	}
}
