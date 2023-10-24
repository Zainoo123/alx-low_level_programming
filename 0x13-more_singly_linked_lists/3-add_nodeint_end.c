#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node at the end of,
 * a listint_t list.
 * @head: pointer to the pointer of the head of the linked list.
 * @n: data to add to the list.
 *
 * Return: the address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element;
	listint_t *current = *head;

	new_element = malloc(sizeof(listint_t));

	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = new_element;
	return (new_element);
}
