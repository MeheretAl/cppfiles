#include "implementation.h"
#include <iostream>

using namespace std;

bool isPalindrome(ListNode *head)
{
    // find middle node
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // reverse middle node
    ListNode *reversed = nullptr;
    ListNode *curr = slow;

    while (curr != nullptr)
    {
        ListNode *nextNode = curr->next;
        curr->next = reversed;
        reversed = curr;
        curr = nextNode;
    }

    while (reversed != nullptr)
    {
        if (reversed->data != head->data)
        {
            return false;
        }
        else
        {
            reversed = reversed->next;
            head = head->next;
        }
    }

    return true;
}

int main()
{
    ListNode *head = createNewListNode(1);
    head->next = createNewListNode(2);
    head->next->next = createNewListNode(2);
    head->next->next->next = createNewListNode(1);
    if (isPalindrome(head))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
    return 0;
}
