#include "implementation.h"
#include <iostream>

using namespace std;

void findVal(ListNode *head, int target)
{
    int pos = 0;
    ListNode *ptr = head;
    while (ptr != nullptr)
    {
        if (target == ptr->data)
        {
            cout << target << " found at position " << pos;
            break;
        }
        // ptr.next == nullptr means we're in the node before the last node
        else if (ptr->next == nullptr && target != ptr->data)
        {
            cout << target << " doesn't exist in the given Linked List." << endl;
            break;
        }

        pos += 1;
        ptr = ptr->next;
    }
}

int main(int argc, char const *argv[])
{
    int val = 5;
    ListNode *head = createNewListNode(0);
    head->next = createNewListNode(5);
    head->next->next = createNewListNode(9);
    head->next->next->next = createNewListNode(7);
    // 5 -> 0 -> 9 -> 7

    findVal(head, val);

    return 0;
}
