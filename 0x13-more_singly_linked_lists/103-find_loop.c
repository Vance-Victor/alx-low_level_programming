#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint - finds loop
 * @head: pointer to linked list
 * Return: address of node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);

		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}
