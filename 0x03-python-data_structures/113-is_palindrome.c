#include "lists.h"
#include <stdlib.h>
/**
 * is_palindrome - checks if a list is palindrome
 * @head: head of list
 * Return: 0 if not a palindrome and 1 if palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow, *fast, *prev, *next, *middle, *current;

	if (head == NULL)
		return (0);

	slow = *head;
	fast = *head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	prev = NULL;
	middle = slow;
	current = middle->next;
	while (current-next)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	fast = *head;
	while (current)
	{
		if (fast->n != current->n)
			return (0);
		current = current->next;
		slow = slow->next;
	}
	return (1);
}

