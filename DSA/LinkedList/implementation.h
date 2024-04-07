#include <iostream>
struct LinkedList
{
    int data;
    LinkedList *next;
};

LinkedList *createNewLinkedList(int data)
{
    LinkedList *node = new LinkedList();
    node->data = data;
    node->next = nullptr;
    return node;
}

// int main()
// {
//
//     LinkedList *node = createNewLinkedList(5);
//
//     node->next = createNewLinkedList(7);
//     std::cout << "node check" << node->next->data;
//     return 0;
// }