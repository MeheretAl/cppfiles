#include "implementation.h"
#include <iostream>

using namespace std;

void findVal(LinkedList *head, int target)
{
    int pos = 0;
    LinkedList *ptr = head;
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
    LinkedList *head = createNewLinkedList(0);
    head->next = createNewLinkedList(5);
    head->next->next = createNewLinkedList(9);
    head->next->next->next = createNewLinkedList(7);
    // 5 -> 0 -> 9 -> 7

    findVal(head, val);

    return 0;
}
