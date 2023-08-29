#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a listint_t list
 * @head: double head pointer
 * @n: the value of int
 * Return: a pointer of the new added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newp = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (!newp)
		return (NULL);

	newp->n = n;
	newp->next = NULL;

	if (*head == NULL)
	{
		*head = newp;
		return (newp);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = newp;

	return (newp);
}
