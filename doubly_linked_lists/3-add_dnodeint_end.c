#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* The list is empty, new node becomes the head */
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* Go to the last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Append the new node */
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
