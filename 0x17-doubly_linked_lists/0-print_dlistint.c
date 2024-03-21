#include<stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	if (temp == NULL)
		return (0);
	else
	{
		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			count++;
		}
	}
	return (count);

}
