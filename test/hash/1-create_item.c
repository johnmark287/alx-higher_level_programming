#include "hash.h"
Ht_item *create_item(char *key, char *value)
{
    // create a pointer to a new HashTable item
    Ht_item *item = (Ht_item*)malloc(sizeof(Ht_item));
    item->key = (char*)malloc(strlen(key) + 1);
    item->value = (char*)malloc(strlen(value) + 1);
    strcpy(item->key, key);
    strcpy(item->value, value);

    return (item);
}
