#include "lists.h"

/**
 * listint_len - returns  number of elements in  linked listint_t list
 * @h: pointer to the list head
 * Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
