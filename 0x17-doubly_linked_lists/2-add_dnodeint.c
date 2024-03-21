#include "lists.h"
/**
 * *add_dnodeint - function
 * @head: double pointer
 * @n: data
 * Return: address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}
	else
	{
		if (*head == NULL)
		{
			*head = newnode;
			newnode->n = n;
			newnode->next = NULL;
			newnode->prev = NULL;
		}
		else
		{
			newnode->n = n;
			newnode->next = *head;
			(*head)->prev = newnode;
			newnode->prev = NULL;
			*head = newnode;
		}
	}
	return (newnode);
}
