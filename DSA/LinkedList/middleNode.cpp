#include "implementation.h"
#include <iostream>

using namespace std;

LinkedList *middleNode(LinkedList *head)
{
    LinkedList *fastptr = head;
    LinkedList *slowptr = head;
    // fastptr != nullptr indicates fastptr has reached the end of the even sized linked list
    // and the slow ptr has reached the middle
    // fastptr.next != nullptr is for when the length of the linked list is odd
    while (fastptr != nullptr && fastptr->next != nullptr)
    {
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }

    return slowptr;
}

int main(int argc, char const *argv[])
{
    LinkedList *head = createNewLinkedList(0);
    head->next = createNewLinkedList(1);
    head->next->next = createNewLinkedList(2);
    head->next->next->next = createNewLinkedList(4);

    LinkedList *check = middleNode(head);
    while (check != nullptr)
    {
        cout << check->data << endl;
        check = check->next;
    }

    return 0;
}
