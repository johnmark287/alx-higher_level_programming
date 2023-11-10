#include "hash.h"

LinkedList *allocate_list()
{
    // Allocates memory for a LinkedList pointer.
    LinkedList *list =  (LinkedList*)malloc(sizeof(LinkedList));
    return (list);
}
