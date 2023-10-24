#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @my_head: pointer to the head of the linked list.
 *
 * Return: Sum of all the data (n) of a linked list or 0 if the list is empty.
 */

int sum_listint(listint_t *my_head)
{
	int total_sum = 0;

	while (my_head != NULL)
	{
		total_sum += my_head->n;
		my_head = my_head->next;
	}

	return (total_sum);
}
