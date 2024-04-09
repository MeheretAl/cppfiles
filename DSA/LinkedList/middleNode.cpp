#include "implementation.h"

using namespace std;

LinkedList *middleNode(LinkedList *head)
{
    LinkedList *fastptr, *slowptr = head;
    // fastptr != nullptr indicates fastptr has reached the end of the even sized linked list
    // and the slow ptr has reached the middle
    // fastptr.next != nullptr is for when the length of the linked list is odd
    while (fastptr->next != nullptr && fastptr != nullptr)
    {
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }

    return slowptr;
}