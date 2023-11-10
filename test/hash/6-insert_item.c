#include "hash.h"

void ht_insert(HashTable *table, char *key, char *value)
{
    // Create the item.
    Ht_item *item = create_item(key, value);

    // Compute the index.
    int index = hash_function(key);

    Ht_item *current_item = table->items[index];

    if (!current_item)
    {
        // Key does not exist.
        if (table->count == table->size)
        {
            // HassTable is full.
            printf("Insert Error: Hash Table is full\n");
            free_item(item);
            return;
        }

        // Insert directly.
        table->items[index] = item;
        table->count++;
    }
    else
    {
        // Scenario 1: Update the value if already exist.
        if (strcmp(current_item->key, key) == 0)
        {
            strcpy(table->items[index]->value, value);
            return;
        }
        else
        {
            // Scenario 2: Handle the collision.
            handle_collision(table, index, item);
            return;
        }
    }
}
