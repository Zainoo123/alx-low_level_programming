#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list.
 * @my_head: pointer to the head of the linked list.
 * @my_index: index of the node, starting at 0.
 *
 * Return: Returns the nth node or NULL if the node is non-existent.
 */

listint_t *get_nodeint_at_index(listint_t *my_head, unsigned int my_index)
{
	unsigned int i = 0;

	if (my_head == NULL)
		return (NULL);

	while (i < my_index && my_head != NULL)
	{
		my_head = my_head->next;
		i++;
	}
	return (my_head);
}
