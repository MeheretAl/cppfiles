#include "implementation.h"
#include <iostream>
#include <vector>

using namespace std;

ListNode *mergeNodes(ListNode *head)
{
    ListNode *dummy = createNewListNode(0);
    ListNode *ptr = head->next; // because it starts from zero and we're guranteed that the List has at least 3 nodes
    ListNode *current = dummy;
    int counter = 0;
    while (ptr != nullptr)
    {
        if (ptr->data != 0)
        {
            counter += ptr->data;
        }
        else
        {
            current->next = createNewListNode(counter);
            current = current->next;
            counter = 0;
        }
        ptr = ptr->next;
    }

    return dummy->next;
}

int main(int argc, char const *argv[])
{
    ListNode *head = createNewListNode(0);
    head->next = createNewListNode(3);
    head->next->next = createNewListNode(1);
    head->next->next->next = createNewListNode(0);
    ListNode *answer = mergeNodes(head);
    ListNode *check = answer;
    while (check != nullptr)
    {
        cout << check->data << "";
        check = check->next;
    }

    return 0;
}
