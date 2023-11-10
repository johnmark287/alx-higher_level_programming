#include "hash.h"

void free_linkedlist(LinkedList *list)
{
    LinkedList *temp = list;

    while (list)
    {
        temp = list;
        list = list->next;
        
        free(temp->item->key);
        free(temp->item->value);
        free(temp->item);
        free(temp);
    }
}
