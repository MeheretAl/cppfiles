#include "implementation.h"

ListNode *removeNodes(ListNode *head)
{
    ListNode *reversedNode = reverseLinkedList(head);
    ListNode *dummy = createNewListNode(0);
    dummy->next = reversedNode;
    ListNode *ptr = dummy;
    int maxdata = reversedNode->data;

    while (ptr->next != nullptr)
    {
        if (ptr->next->data < maxdata)
        {
            ptr->next = ptr->next->next;
        }
        else
        {
            maxdata = ptr->next->data;
            ptr = ptr->next;
        }
    }

    return reverseLinkedList(dummy->next);
}
