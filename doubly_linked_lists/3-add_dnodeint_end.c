#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - add node at the end
 * @head: the head of the list
 * @n: the number to put in the node
 * Return: the new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *temp;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        printf("Memory not allocated\n");
        return (NULL);
    }

    new->n = n;
    new->next = NULL;
    new->prev = NULL;

    if (head == NULL)  /* erreur : on devrait vérifier *head */
        return (NULL);

    if (*head == NULL)
    {
        *head = new;
    }
    else
    {
        temp = *head;

        while (temp->next != NULL)
        {
            temp++;  /* ❌ erreur : on doit faire temp = temp->next */
        }

        temp->next = new;
        new->prev = temp;
    }

    return (new);
}
