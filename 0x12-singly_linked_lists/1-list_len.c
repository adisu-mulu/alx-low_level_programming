#include "lists.h"

/**
 * list_len - function
 * @h: pointer to list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
