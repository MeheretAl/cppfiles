#include "implementation.h"

ListNode *mergeTwoSortedList(ListNode *list1, ListNode *list2)
{

    if (list1 == nullptr)
    {
        return list2;
    }
    else if (list2 == nullptr)
    {
        return list1;
    }

    ListNode *temp1 = list1;
    ListNode *temp2 = list2;
    ListNode *merged = new ListNode();
    ListNode *current = merged;

    while (temp1 != nullptr && temp2 != nullptr)
    {
        current->next = new ListNode(); // creating a new node as we go
        current = current->next;        // updating the current node with the node we created above

        if (temp1->data <= temp2->data)
        {
            current->data = temp1->data;
            temp1 = temp1->next;
        }
        else
        {
            current->data = temp2->data;
            temp2 = temp2->next;
        }
    }

    if (temp1 != nullptr)
    {
        current->next = temp1;
    }
    else
    {
        current->next = temp2;
    }

    return merged->next; // next because the actual merged List starts at the next Node ~ line 22
}