#include "lists.h"
/**
 * free_listint2 - free a head pointer
 * @head: a double pointer to a linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
}
