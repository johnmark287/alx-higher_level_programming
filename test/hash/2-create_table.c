#include "hash.h"

HashTable *create_table(int size)
{
    // Creates a new HasTable.
    HashTable *table = (HashTable*)malloc(sizeof(HashTable));
    table->size = size;
    table->count = 0;
    table->items = (Ht_item**)calloc(table->size, sizeof(Ht_item*)); // An array of pointers to items

    for (int i = 0; i < table->size; i++)
        table->items[i] = NULL;

    table->overflow_buckets = create_overflow_buckets(table);

    return (table);
}
