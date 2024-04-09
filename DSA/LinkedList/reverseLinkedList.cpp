#include "implementation.h"
#include <iostream>

using namespace std;

LinkedList *iterativeReverseLinkedList(LinkedList *head)
{
    // iterative approach
    LinkedList *prev = nullptr;
    LinkedList *curr = head;

    while (curr != nullptr)
    {
        LinkedList *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}

int main(int argc, char const *argv[])
{
    LinkedList *finalReversed;
    LinkedList *head = createNewLinkedList(0);
    head->next = createNewLinkedList(5);
    head->next->next = createNewLinkedList(9);
    head->next->next->next = createNewLinkedList(7);
    // 5 -> 0 -> 9 -> 7
    finalReversed = iterativeReverseLinkedList(head);

    LinkedList *ptr = finalReversed;
    cout << "Reversed\n";
    while (ptr != nullptr)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    return 0;
}
