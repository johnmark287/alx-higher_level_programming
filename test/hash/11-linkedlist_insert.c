#include "hash.h"

LinkedList *linkelist_insert(LinkedList *list, Ht_item *item)
{
    // Inserts the item onto the LinkedList.
    if (!list)
    {
        LinkedList *head = allocate_list();
        head->item = item;
        head->next = NULL;
        list = head;

        return (list);
    }
    else if (!(list->next))
    {
        LinkedList *node = allocate_list();
        node->item = item;
        node->next = NULL;
        list->next = node;

        return (list);
    }
    LinkedList *temp = list;

    while (temp->next->next)
        temp = temp->next;
    
    LinkedList *node = allocate_list();
    node->item = item;
    node->next = NULL;
    temp->next = node;
    
    return(list);
}
