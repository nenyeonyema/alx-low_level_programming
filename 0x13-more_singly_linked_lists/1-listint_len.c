#include "lists.h"

/**
 * listint_len - a function that retrns the number of elements
 * @h: head pointer
 * Return: number of elements
 */

 size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
