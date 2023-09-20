#include <stdlib.h>
#include "lists.h"

/**
* check_cycle - Checks if a singly-linked list contains a cycle.
* @list: A singly-linked list.
*
* Return: If there is no cycle - 0.
*         If there is a cycle - 1.
*/
int check_cycle(listint_t *list)
{
listint_t *myturtle, *myhare;

if (list == NULL || list->next == NULL)
return (0);

myturtle = list->next;
myhare = list->next->next;

while (myturtle && myhare && myhare->next)
{
if (myturtle == myhare)
return (1);

myturtle = myturtle->next;
myhare = myhare->next->next;
}

return (0);
}
