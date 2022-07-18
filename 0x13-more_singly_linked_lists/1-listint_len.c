#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the first node of a linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
