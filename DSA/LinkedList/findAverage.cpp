#include "implementation.h"
#include <iostream>

using namespace std;

double findAverage(LinkedList *head)
{
    if (head == nullptr)
    {
        return 0.0;
    }

    LinkedList *ptr = head;
    int sum = 0, size = 0;
    while (ptr != nullptr)
    {
        sum += ptr->data;
        size += 1;
        ptr = ptr->next;
    }
    // sum needs to be a double otherwise the divide is an integer division i.e truncating the data
    // after the .
    return static_cast<double>(sum) / size;
}

int main(int argc, char const *argv[])
{

    LinkedList *head = createNewLinkedList(0);
    head->next = createNewLinkedList(5);
    head->next->next = createNewLinkedList(9);
    head->next->next->next = createNewLinkedList(7);
    // 5 -> 0 -> 9 -> 7

    cout << findAverage(head);

    return 0;
}