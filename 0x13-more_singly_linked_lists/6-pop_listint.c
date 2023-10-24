#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a listint_t,
 * linked list.
 * @my_head: pointer to pointer to the head of the linked list.
 * Return: Returns the head node’s data (n) or 0 if the list is empty.
 */

int pop_listint(listint_t **my_head)
{
	listint_t *temp_node;
	int data = 0;

	if (my_head == NULL || *my_head == NULL)
		return (0);

	temp_node = *my_head;
	data = temp_node->n;
	*my_head = (*my_head)->next;
	free(temp_node);

	return (data);
}
