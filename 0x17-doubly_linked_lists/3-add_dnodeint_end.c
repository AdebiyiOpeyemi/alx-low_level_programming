#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head pointer
 * @n: new_node element
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(temp);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);

}
