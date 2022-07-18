#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of listint_t list
 * @head: double pointer to the first node of listint_t
 * @n: data value of the new node
 * Return: address of the new node or NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
