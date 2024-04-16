#include "implementation.h"

bool cycleExists(ListNode *head)
{
    ListNode *slowptr = head;
    ListNode *fastptr = head;

    while (slowptr != nullptr && fastptr != nullptr && fastptr->next != nullptr)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if (fastptr == slowptr)
        {
            return true;
        }
    }

    return false;
}