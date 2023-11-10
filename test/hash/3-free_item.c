#include "hash.h"

void free_item(Ht_item *item)
{
    // frees an item.
    free(item->key);
    free(item->value);
    free(item);
}
