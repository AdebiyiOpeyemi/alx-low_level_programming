#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of listint_t list
 * @h: head pointer to singly linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
