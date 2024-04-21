#include "implementation.h"
#include <iostream>

using namespace std;

ListNode *deleteMiddleNode(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    ListNode *ptr = head;
    // find length of List to determine middleNode
    int length = 0;
    while (ptr != nullptr)
    {
        ptr = ptr->next;
        length += 1;
    }

    int middle = length / 2;
    ptr = head;
    // find prev node
    for (int i = 0; i < middle - 1; i++)
    {
        ptr = ptr->next;
    }

    // remove middle node
    ListNode *middleNode = ptr->next;
    ptr->next = ptr->next->next;
    delete middleNode;

    return head;
}

// sample example
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
