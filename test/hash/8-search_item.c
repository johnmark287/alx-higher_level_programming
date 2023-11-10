#include "hash.h"

char *ht_search(HashTable *table, char *key)
{
    /**
     * Searches for the key in the HashTable.
     * Returns NULL if it doesn't exist.
    */
    int index = hash_function(key);
    Ht_item *item = table->items[index];
    LinkedList *head = table->overflow_buckets[index];

    // Provide only non-NULL values.
    if (item)
    {
        if (strcmp(item->key, key) == 0)
            return (item->value);

        if (!head)
            return (NULL);

        item = head->item;
        head = head->next;
    }

    return NULL;
}
