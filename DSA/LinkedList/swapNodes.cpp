#include <iostream>
#include "implementation.h"


using namespace std;

ListNode* swapNodes(ListNode* head, int k) {
    // Find kth node
    ListNode* firstptr = head;
    for (int i = 1; i < k && firstptr; ++i) {
        firstptr = firstptr->next;
    }
    
    if (!firstptr) {
        return head;
    }


    ListNode* slowptr = head;
    ListNode* fastptr = firstptr;
    while (fastptr->next!=nullptr)
    {
        fastptr = fastptr->next;
        slowptr = slowptr->next;
    }

    
    
    int temp = slowptr->data;
    slowptr->data = firstptr->data;
    firstptr->data = temp;

    return reverseLinkedList(head);
}


int main(int argc, char const *argv[])
{
    ListNode *head = createNewListNode(0);
    head->next = createNewListNode(1);
    head->next->next = createNewListNode(2);
    head->next->next->next = createNewListNode(4);
    head->next->next->next->next = createNewListNode(5);
    ListNode* swappedNodes = swapNodes(head,1);
    while (swappedNodes)
    {
        cout << swappedNodes->data << endl;
        swappedNodes = swappedNodes->next;
    }
    

    return 0;
}
