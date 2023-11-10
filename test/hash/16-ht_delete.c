#include "hash.h"

void ht_delete(HashTable *table, char *key)
{
    // Deletes an item from the table.
    int index = hash_function(key);
    Ht_item *item = table->items[index];
    LinkedList *head = table->overflow_buckets[index];

    if (!item)
    {
        // Does not exist.
        return;
    }
    else
    {
        if (!(head) && !(strcmp(item->key, key)))
        {
            /**
             * Collision chain does not exist.
             * remove the item.
             * set table index to NULL.
            */
            table->items[index] = NULL;
            free_item(item);
            table->count--;
            return;
        }
        else if (head)
        {
            // Collision chain exist.
            if (!(strcmp(item->key, key)))
            {
                /**
                 * Remove this item.
                 * Set the head of the list as the new item.
                */
                free_item(item);
                LinkedList *node = head;
                head = head->next;
                node->next = NULL;
                table->items[index] = create_item(node->item->key, node->item->value);
                free_linkedlist(node);
                table->overflow_buckets[index] = head;
                return;
            }

            LinkedList *curr = head;
            LinkedList *prev= NULL;

            while (curr)
            {
                if (!(strcmp(curr->item->key, key)))
                {
                    if (!prev)
                    {
                        /**
                         * 1st element of the chain.
                         * Remove the chain.
                        */
                        free_linkedlist(head);
                        table->overflow_buckets[index] = NULL;
                        return;
                    }
                    else
                    {
                        // This is somewhere in the chain.
                        prev->next = curr->next;
                        curr->next = NULL;
                        free_linkedlist(curr);
                        table->overflow_buckets[index] = head;
                        return;
                    }
                }

                curr = curr->next;
                prev = curr;
            }
        }
    }
}
