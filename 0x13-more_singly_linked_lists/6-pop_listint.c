#include "lists.h"
/**
 * pop_listint - free the head node of a linked list
 * @head: double pointer to head node
 * Return: head's node data n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data);
}
