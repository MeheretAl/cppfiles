#include <iostream>
#include "implementation.h"


using namespace std;

ListNode* swapNodes(ListNode* head, int k) {
    // Find kth node
    ListNode* firstptr = head;
    for (int i = 1; i < k && firstptr; ++i) {
        firstptr = firstptr->next;
    }
    ListNode* dummy = createNewListNode(0);
    dummy->next = head;
    ListNode* slowptr = dummy;
    ListNode* fastptr = firstptr;
    while (fastptr->next)
    {
        fastptr = fastptr->next;
        slowptr = slowptr->next;
    }

    //swapping
    int swap = slowptr->next->data;
    slowptr->next->data = firstptr->data;
    firstptr->data = swap;

    return dummy->next;
    
}


int main(int argc, char const *argv[])
{
    ListNode *head = createNewListNode(0);
    head->next = createNewListNode(1);
    head->next->next = createNewListNode(2);
    head->next->next->next = createNewListNode(4);
    head->next->next->next->next = createNewListNode(5);
    ListNode* swappedNodes = swapNodes(head,2);
    while (swappedNodes)
    {
        cout << swappedNodes->data << endl;
        swappedNodes = swappedNodes->next;
    }
    

    return 0;
}
