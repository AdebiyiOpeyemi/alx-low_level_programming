#include "lists.h"
/**
 * listint_len - gets the length of a linked list
 * @h: head pointer
 * Return: len
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
/**
 * delete_nodeint_at_index - delete a node at a particular index
 * @head: double pointer to head node
 * @index: index to delete node
 * Return: 1 on success or -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *next;
	size_t size = listint_len(*head);

	if (*head == NULL)
		return (-1);
	if (index == 0) /* to delete the head node */
	{
		(*head) = temp->next;
		free(temp);
		return (1);
	}
	if (index > size) /* checks if index is accessible */
		return (-1);
	/* loop till index - 1, where the ptr of node to be dleted is stored */
	--index;
	while (index != 0)
	{
		temp = temp->next;
		index--;
	}
	next = temp->next->next; /* store the next node after the deleted node */
	free(temp->next); /* deletes the node */
	temp->next = next; /* link (index - 1)th to (index + 1)th node */
	return (1);
}
