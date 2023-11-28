#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - insert a node
 * @head: head of list
 * @number: int
 * Return: NULL on fail
 */
listint_t *insert_node(listint_t **head, const int number)
{
	listint_t *current, *temp;
	listint_t *node = (listint_t *) malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (node == NULL)
		return (NULL);
	node->n = number;
	node->next = NULL;

	if (*head == NULL || number <= (*head)->n)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	{
		if (current->n < number && current->next->n >= number)
		{
			temp = current->next;
			current->next = node;
			node->next = temp;
		}
		current = current->next;
	}

	if (number >= current->n)
	{
		temp = current->next;
		current->next = node;
		node->next = temp;
	}
	return (*head);
}

