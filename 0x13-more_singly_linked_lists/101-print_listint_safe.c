#include "lists.h"

/**
 * print_listint_safe - print listint_t linked list
 * @head: pointer to the list head
 * Return: the list nodes number
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *tmp;

	if (head == NULL)
		exit(98);

	for (i = 0; head; i++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		tmp = head;
		head = head->next;
		if (tmp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}

	return (i);
}

