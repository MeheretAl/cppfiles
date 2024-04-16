#include "implementation.h"

ListNode *removeDuplicates(ListNode *head)
{
    ListNode *current = head;
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    while (current != nullptr && current->next != nullptr)
    {

        if (current->data == current->next->data)
        {
            ListNode *duplicate = current->next; // marking the node we want to delete as duplicate
            current->next = duplicate->next;     // setting the next current ptr to the next duplicate ptr
            // given  1->1->2->1
            // duplicate points to the 1st index
            // current->next was supposed to point to 1st index but we go one above to the 2nd index
            // so our pointing structure? looks like 1->2->1 we've let go of 1

            delete duplicate; // deleting 1 we longer need it or reference it again anywhere
        }
        else
        {
            current = current->next;
        }
    }

    return head;
}
