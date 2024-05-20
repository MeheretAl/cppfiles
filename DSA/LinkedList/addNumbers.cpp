#include "implementation.h"
#include <iostream>

using namespace std;



ListNode *addNumbers(ListNode* head1, ListNode* head2) {
    ListNode* dummy = createNewListNode(0);
    ListNode* answer = dummy;
    int carry = 0;
    ListNode* num1 = head1;
    ListNode* num2 = head2;
    
    while (num1 || num2 || carry) {   
        int sum = carry;
        if (num1) {
            sum += num1->data;
            num1 = num1->next;
        }
        if (num2) {
            sum += num2->data;
            num2 = num2->next;
        }

        carry = sum / 10;
        int nodeVal = sum % 10;
        answer->next = createNewListNode(nodeVal);
        answer = answer->next;
    }
    
    return dummy->next;
}
