#include "implementation.h"
#include <iostream>

using namespace std;

ListNode *deleteMiddleNode(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    // find middle node first
    ListNode *fastptr = head;
    ListNode *slowptr = head;
    ListNode *prev = nullptr;

    while (fastptr != nullptr && fastptr->next != nullptr)
    {
        fastptr = fastptr->next->next;
        prev = slowptr; // this is the node before the middle one
        slowptr = slowptr->next;
    }

    // 1 , 2, 3, 4, 5,6
    // 3 is to be deleted so 2 needs a link to 4

    if (prev != nullptr)
    {
        prev->next = slowptr->next;
        delete slowptr;
    }
    else
    {
        head = head->next;
        delete slowptr;
    }

    return head;
}

int main(int argc, char const *argv[])
{
    ListNode *head = createNewListNode(1);
    head->next = createNewListNode(2);
    head->next->next = createNewListNode(3);
    ListNode *middle = deleteMiddleNode(head);
    while (middle != nullptr)
    {
        cout << middle->data << endl;
        middle = middle->next;
    }

    return 0;
}
