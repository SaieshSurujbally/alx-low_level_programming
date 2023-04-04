#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints everything in the listint_t list.
 *
 * @h: head of linklist node
 *
 * Return: the node number 
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
