#include "lists.h"
#include <stdio.h>

size_t count_unique_nodes(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * count_unique_nodes - Counts the number of unique nodes
 *                      in a listint_t linked list.
 * @my_head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t count_unique_nodes(const listint_t *my_head)
{
	const listint_t *slow, *fast;
	size_t nodes = 1;

	if (my_head == NULL || my_head->next == NULL)
		return (0);

	slow = my_head->next;
	fast = (my_head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = my_head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}

			return (nodes);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @my_head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *my_head)
{
	size_t nodes, index = 0;

	nodes = count_unique_nodes(my_head);

	if (nodes == 0)
	{
		for (; my_head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)my_head, my_head->n);
			my_head = my_head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)my_head, my_head->n);
			my_head = my_head->next;
		}

		printf("-> [%p] %d\n", (void *)my_head, my_head->n);
	}

	return (nodes);
}
