#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a singly linked list.
 * @my_head: pointer to pointer to the head of the linked list.
 * Return: No return.
 */

void free_listint2(listint_t **my_head)
{
	listint_t *temp_variable;

	if (my_head == NULL)
	return;

	while (*my_head != NULL)
	{
		temp_variable =  *my_head;
		*my_head = (*my_head)->next;
		free(temp_variable);
	}
}
