#include "hash.h"

Ht_item *linkedlist_remove(LinkedList *list)
{
    /**
     * Removes the head from the LinkedList.
     * Returns the item of the popped element.
    */
    if (!list)
        return (NULL);

    if (!(list->next))
        return (NULL);

    LinkedList *node = list->next;
    LinkedList *temp = list;
    temp->next = NULL;
    list = node;
    Ht_item *it = NULL;

    memcpy(temp->item, it, sizeof(Ht_item));
    free(temp->item->key);
    free(temp->item->value);
    free(temp->item);
    free(temp);

    return (it);
}
