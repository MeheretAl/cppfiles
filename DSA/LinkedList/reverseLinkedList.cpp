#include "implementation.h"
#include <iostream>

using namespace std;

ListNode *iterativeReverseListNode(ListNode *head)
{
    // iterative approach
    ListNode *prev = nullptr;
    ListNode *curr = head;

    while (curr != nullptr)
    {
        ListNode *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}

int main(int argc, char const *argv[])
{
    ListNode *finalReversed;
    ListNode *head = createNewListNode(0);
    head->next = createNewListNode(5);
    head->next->next = createNewListNode(9);
    head->next->next->next = createNewListNode(7);
    // 5 -> 0 -> 9 -> 7
    finalReversed = iterativeReverseListNode(head);

    ListNode *ptr = finalReversed;
    cout << "Reversed\n";
    while (ptr != nullptr)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    return 0;
}
