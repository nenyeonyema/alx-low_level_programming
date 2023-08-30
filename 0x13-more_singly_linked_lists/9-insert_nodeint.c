#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: double head pointer
 * @idx: position of the new node
 * @n: value at n
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	ptr = *head;
	while (idx > 1)
	{
		ptr = ptr->next;
		idx--;
	}
	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
