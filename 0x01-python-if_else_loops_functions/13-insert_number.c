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
	listint_t *current_node, *temp;
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
	current_node = *head;
	while (current_node->next != NULL)
	{
		if (current_node->n < number && current_node->next->n >= number)
		{
			temp = current_node->next;
			current_node->next = node;
			node->next = temp;
		}
		current_node = current_node->next;
	}

	if (number >= current_node->n)
	{
		temp = current_node->next;
		current_node->next = node;
		node->next = temp;
	}
	return (*head);
}

