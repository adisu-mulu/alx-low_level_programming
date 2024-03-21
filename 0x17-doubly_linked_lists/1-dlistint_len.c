#include<stdio.h>
#include "lists.h"

/**
 * dlistint_len - function
 * @h: double pointer
 * Return: counter
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	if (temp == NULL)
	{
		return (0);
	}
	else
	{
		while (temp != NULL)
		{
			temp = temp->next;
			count++;
		}
	}
	return (count);

}
