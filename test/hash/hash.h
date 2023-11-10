#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAPACITY 50000 // hash table size

// Hashtable item.
typedef struct Ht_item
{
    char *key;
    char *value;
}Ht_item;

typedef struct LinkedList
{
    Ht_item *item;
    struct LinkedList *next;
} LinkedList;

// The hashtable.
typedef struct HashTable
{
    // Contains an array of pointers to items.
    Ht_item **items;
    LinkedList **overflow_buckets;
    int size; //size of the ht.
    int count; // Number of elements in ht.
}HashTable;


unsigned long hash_function(char *str);
Ht_item *create_item(char *key, char *value);
HashTable *create_table(int size);

void free_item(Ht_item *item);
void free_table(HashTable *table);
void print_table(HashTable *table);
void print_search(HashTable *table, char *key);

void ht_insert(HashTable *table, char *key, char *value);
void handle_collision(HashTable *table, unsigned long index, Ht_item *item);
char *ht_search(HashTable *table, char *key);
void ht_delete(HashTable *table, char *key);

// Handling collision.
LinkedList *allocate_list();
LinkedList *linkelist_insert(LinkedList *list, Ht_item *item);
Ht_item *linkedlist_remove(LinkedList *list);
void free_linkedlist(LinkedList *list);

LinkedList **create_overflow_buckets(HashTable *table);
void free_overflow_buckets(HashTable *table);

#endif // MAIN_H
