#include "implementation.h"
#include <iostream>

using namespace std;

bool isPalindrome(LinkedList *head)
{
    // find middle node
    LinkedList *slow = head;
    LinkedList *fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // reverse middle node
    LinkedList *reversed = nullptr;
    LinkedList *curr = slow;

    while (curr != nullptr)
    {
        LinkedList *nextNode = curr->next;
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
    LinkedList *head = createNewLinkedList(1);
    head->next = createNewLinkedList(2);
    head->next->next = createNewLinkedList(2);
    head->next->next->next = createNewLinkedList(1);
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
