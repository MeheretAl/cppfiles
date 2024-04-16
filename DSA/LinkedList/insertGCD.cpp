#include "implementation.h"
#include <algorithm>

using namespace std;

ListNode *insertGCD(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    ListNode *ptr = head, *temp = nullptr;

    while (ptr->next != nullptr)
    {
        temp = ptr->next;
        int gcd = __gcd(ptr->data, ptr->next->data);
        ListNode *newNode = createNewListNode(gcd);
        ptr->next = newNode;
        newNode->next = temp;
        ptr = ptr->next->next;
    }

    return head;
}
