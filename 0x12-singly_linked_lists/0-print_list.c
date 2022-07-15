#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of linked list
 * @h: pointer to list to print
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		num++;
		h = h->next;
	}
	return (num);
}
