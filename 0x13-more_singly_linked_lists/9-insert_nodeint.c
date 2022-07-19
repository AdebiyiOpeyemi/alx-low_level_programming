#include "lists.h"
/**
 * listint_len - get the len or size of linked list
 * @h: pointer to head node
 * Return: len of linked list
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
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: a double pointer to head node
 * @idx: index to insert new node
 * @n: new node's data value
 * Return: address of new node or NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t size = listint_len(*head);
	listint_t *new_node;
	listint_t *temp = *head;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	/* checking if adding new_nide to index is possible */
	if (idx > size)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *head;
		(*head) = new_node;
		return (new_node);
	}
	--idx; /* shift to position before the nth index */
	while (idx != 0)
	{
		temp = temp->next;
		idx--;
	}
	new_node->next = temp->next; /* set new_node's next to nth's next */
	temp->next = new_node; /* insert new_node between nth -1 and nth +1 */
	return (new_node);
}
