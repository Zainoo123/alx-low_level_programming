#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 * index of a listint_t list.
 * @my_head: A pointer to the address of the
 *        head of the listint_t list.
 * @my_index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **my_head, unsigned int my_index)
{
	listint_t *tmp, *current = *my_head;
	unsigned int node;

	if (current == NULL)
		return (-1);

	if (my_index == 0)
	{
		*my_head = (*my_head)->next;
		free(current);
		return (1);
	}

	for (node = 0; node < (my_index - 1); node++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}

	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
