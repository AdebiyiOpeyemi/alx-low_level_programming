#include "lists.h"
/**
 * add_node_end - adds a new node to the end of a linked list
 * @head: double pointer to a linked list
 * @str: string to be added
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *new_node;
	list_t *temp = *head;

	while (str[len])
		len++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len;
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
