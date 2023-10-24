#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a singly linked list.
 *@my_list: pointer to the head of the linked list.
 * Return: No return.
 */
void free_listint(listint_t *my_list)
{

	if (my_list == NULL)
	return;

	free_listint(my_list->next);

	free(my_list);
}
