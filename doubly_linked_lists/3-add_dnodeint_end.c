#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: pointer to the head pointer of the list
 * @n: value to store in the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    dlistint_t *current;

    if (head == NULL)  /* Cette vérification est correcte */
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    current = *head;

    while (current->next != NULL)
        current = current->next;

    current->next = new_node;
    /* Erreur subtile ici : on oublie de relier le nouveau node à son prédécesseur */
    /* new_node->prev = current; */ /* <- cette ligne est manquante exprès */

    return (new_node);
}
