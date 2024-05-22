#include "implementation.h"

ListNode *mergeInBetweenNodes(ListNode *list1, ListNode *list2, int a, int b)
{
    ListNode *NodeA = nullptr, *nodeB = nullptr, *ptr = list1;
    int count = 0;
    while (ptr != nullptr)
    {

        if (count == a - 1)
        {
            // getting nodeA to start connecting with list2
            NodeA = ptr;
        }
        else if (count == b)
        {
            // saving nodeB for later use when connecting again
            nodeB = ptr;
            break;
        }
        count += 1;
        ptr = ptr->next;
    }
    // connecting nodeA with list2
    NodeA->next = list2;
    ListNode *ptr2 = list2;
    // finding the last node of list2 to connect back with list1
    while (ptr2->next != nullptr)
    {
        ptr2 = ptr2->next;
    }

    ptr2->next = nodeB->next;

    return list1;
}