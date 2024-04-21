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

ListNode *reverseLinkedList(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *current = head;
    ListNode *next;
    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
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