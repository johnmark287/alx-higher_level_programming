#include "hash.h"

void free_overflow_buckets(HashTable *table)
{
    // Free all the overflow bucket list.
    LinkedList **buckets = table->overflow_buckets;

    for (int i = 0; i < table->size; i++)
        free_linkedlist(buckets[i]);
    
    free(buckets);
}
