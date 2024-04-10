#include "implementation.h"

LinkedList *mergeTwoSortedList(LinkedList *list1, LinkedList *list2)
{
    if (list1 == nullptr)
    {
        return list2;
    }
    else if (list2 == nullptr)
    {
        return list1;
    }

    LinkedList *merged;
    // entry point for the merged ptr
    if (list1->data <= list2->data)
    {
        merged = list1;
        list1 = list1->next;
    }
    else
    {
        merged = list2;
        list2 = list2->next;
    }

    LinkedList *current = merged;

    while (list1 != nullptr && list2 != nullptr)
    {
        if (list1->data <= list2->data)
        {
            current->next = list1;
            list1 = list1->next;
        }
        else
        {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    if (list1 != nullptr)
    {
        current->next = list1;
    }
    else
    {
        current->next = list2; // basically appending the rest of list2 to the answer node
    }
    // can be optimized further
    return merged;
}