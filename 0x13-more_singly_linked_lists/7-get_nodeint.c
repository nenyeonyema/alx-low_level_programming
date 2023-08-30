#include "lists.h"

/**
 * get_nodeint_at_index - e a function that returns the
 * nth node of a listint_t linked list.
 * @head: pointer to the head node
 * @index: at nth node
 * Return:a pointer of the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	if ((head == NULL) || (head->next == NULL))
		return (NULL);

	ptr = head;
	while (index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	if (!ptr == NULL)
		return (NULL);
	return (ptr);
}
