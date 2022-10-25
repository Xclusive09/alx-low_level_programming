#include "lists.h"

/**
 * pop_listint -  deletes the head node of a linked list
 * @head: head of linked list
 * Return: head of node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int v;

	if (head == NULL)
		return (0);

	current = *head;

	if (current == NULL)
		return (0);
	v = current->n;
	*head = current->next;
	free(current);
	return (v);
}
