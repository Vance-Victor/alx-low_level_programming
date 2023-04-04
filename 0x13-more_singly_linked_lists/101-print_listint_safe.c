#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint - finds loop
 * @head: pointer to linked list
 * Return: address of node
 */

listint_t *find_listint(listint_t *head)
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


/**
 * print_listint_safe - prints nodes of linked list with addresses
 * @head: pointer to linked list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0;
	int loop;
	listint_t *loopnode;

	loopnode = find_listint((listint_t *) head);

	for (i = 0, loop = 1; (head != loopnode || loop) && head != NULL; i++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loopnode)
			loop = 0;
		head = head->next;
	}
	if (loopnode != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (i);
}
