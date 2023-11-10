#include "hash.h"

void free_table(HashTable *table)
{
    // Frees the table.
    for (int i = 0; i< table->size; i++)
    {
        Ht_item *item = table->items[i];

        if (item)
            free_item(item);
    }

    // Free the overflow bucket lists.
    free_overflow_buckets(table);
    free(table->items);
    free(table);
}
