#include "implementation.h"
#include <iostream>

using namespace std;

int getDecimalValue(LinkedList *head)
{
    int ans = 0;
    LinkedList *ptr = head;
    while (ptr != nullptr)
    {
        // bit shifting to the left by 1 to make place for the next data
        // this just multiplies every value by 2 and assigns it to ans
        //  ans = (0 << 1) | 1
        //  ans = (1) | 1
        //  ans = 1
        //  ans = (1 << 1) | 0
        //  ans = 2 | 0
        //  ans = 2
        //  ans = (2 << 1) | 1
        //  ans = 4 | 1
        //  ans = 5 --> the answer
        ans = (ans << 1) | ptr->data;
        ptr = ptr->next;
    }

    return ans;
}

int main()
{
    LinkedList *node = createNewLinkedList(1);
    node->next = createNewLinkedList(0);
    node->next->next = createNewLinkedList(1);

    cout << getDecimalValue(node);

    return 0;
}