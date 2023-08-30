#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node
 * at index index of a listint_t linked list.
 * @@head: double head pointer
 * @index: is the index of the node that should be deleted
 * Return:an int -1 or 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_ptr =  malloc(sizeof(listint_t));
	listint_t *curr_ptr =  malloc(sizeof(listint_t));

	if (prev_ptr == NULL)
		return (NULL);
	prev_ptr = *head;
	curr_ptr = *head;

	if (index == 1)
	{
		*head = curr_ptr->next;
		free(curr_ptr);
		curr_ptr = NULL;
	}
	else
	{
		while (index > 1)
		{
			prev_ptr = curr_ptr;
			cur_ptr  = curr_ptr->next;
			index--;
		}
		prev_ptr->next = curr_ptr->next;
		free(curr_ptr);
		curr_ptr = NULL;
	}
	if (curr_ptr == NULL)
		return (1);
	else
		return (-1);
}
