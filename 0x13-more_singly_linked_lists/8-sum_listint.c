#include "lists.h"
/**
 * sum_listint - sums all the data in a linked list
 * @head: pointer to head node
 * Return: sum, or 0 otherwise
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
