#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @my_head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **my_head)
{
	listint_t *current, *previous;

	if (my_head == NULL || *my_head == NULL)
		return (NULL);

	previous = NULL;

	while ((*my_head)->next != NULL)
	{
		current = (*my_head)->next;
		(*my_head)->next = previous;
		previous = *my_head;
		*my_head = current;
	}

	(*my_head)->next = previous;

	return (*my_head);
}
