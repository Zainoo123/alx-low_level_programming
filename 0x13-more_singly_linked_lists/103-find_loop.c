#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * a listint_t linked list.
 * @my_head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *my_head)
{
	listint_t *slow, *fast;

	if (my_head == NULL || my_head->next == NULL)
		return (NULL);

	slow = my_head->next;
	fast = (my_head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = my_head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (NULL);
}
