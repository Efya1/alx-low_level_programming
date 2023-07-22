#include "lists.h"

/**
 * sum_dlistint - sum all items in a doubly-linked list
 * @head: pointer to the beginning of the list
 *
 * Afua Task 6 returns the sum
 * Return: The sum of all items in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for ( ; head; head = head->next)
		sum += head->n;

	return (sum);
}
