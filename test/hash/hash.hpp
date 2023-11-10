#ifndef MAIN_H
#define MAIN_H

#include <iostream>
using namespace std;

typedef struct Ht_item
{
    char *key;
    char *value;
}Ht_item;

unsigned long hash_function(char *str);

#endif // MAIN_H
