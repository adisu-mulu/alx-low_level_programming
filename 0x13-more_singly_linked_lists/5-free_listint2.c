#include "lists.h"
/**
 * free_listint2 - function
 * @head: pointer
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tmep = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL
}
}