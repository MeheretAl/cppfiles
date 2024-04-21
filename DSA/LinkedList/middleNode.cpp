#include "implementation.h"
#include <iostream>

using namespace std;

ListNode *middleNode(ListNode *head)
{
    ListNode *fastptr = head;
    ListNode *slowptr = head;
    // fastptr != nullptr indicates fastptr has reached the end of the linked list
    // and the slow ptr has reached the middle
    // fastptr.next != nullptr is for when the length of the linked list is even
    while (fastptr != nullptr && fastptr->next != nullptr)
    {
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }

    return slowptr;
}

int main(int argc, char const *argv[])
{
    ListNode *head = createNewListNode(0);
    head->next = createNewListNode(1);
    head->next->next = createNewListNode(2);
    head->next->next->next = createNewListNode(4);

    ListNode *check = middleNode(head);
    while (check != nullptr)
    {
        cout << check->data << endl;
        check = check->next;
    }

    return 0;
}
