#include "lists.h"

/**
 * *add_nodeint - a function that adds a new node at the beginning
 * @head: double head pointer
 * @n: value of n in the node
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (!head)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
