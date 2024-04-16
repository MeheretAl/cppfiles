#include <iostream>
struct ListNode
{
    int data;
    ListNode *next;
};

ListNode *createNewListNode(int data)
{
    ListNode *node = new ListNode();
    node->data = data;
    node->next = nullptr;
    return node;
}

void insertNode(ListNode *head, int data)
{
    ListNode *newNode = createNewListNode(data);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    ListNode *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }

    current->next = newNode;
}

// int main()
// {
//
//     ListNode *node = createNewListNode(5);
//
//     node->next = createNewListNode(7);
//     std::cout << "node check" << node->next->data;
//     return 0;
// }