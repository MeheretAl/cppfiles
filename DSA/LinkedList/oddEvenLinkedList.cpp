#include "implementation.h";

ListNode *oddEvenLinkedList(ListNode *head)
{
    if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
    {
        return head;
    }

    ListNode *even = head->next;
    ListNode *odd = head;
    ListNode *evenhead = even;

    while (even != nullptr && even->next != nullptr)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenhead;

    return head;
}