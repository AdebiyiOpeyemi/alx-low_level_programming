#include "lists.h"
/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: head pointer to first node of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);
	while (h)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
