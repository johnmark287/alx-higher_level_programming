#include "hash.h"

LinkedList **create_overflow_buckets(HashTable *table)
{
    // Create the overflow buckets: An array of LinkedList.
    LinkedList **buckets = (LinkedList**)calloc(table->size, sizeof(LinkedList*));

    for (int i = 0; i < table->size; i++)
        buckets[i] = NULL;

    return (buckets);
}
