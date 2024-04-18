struct doublyLinkedList
{
    doublyLinkedList *prev;
    doublyLinkedList *next;
    int data;
};

doublyLinkedList *createDoublyLink(int data)
{
    doublyLinkedList *node = new doublyLinkedList();
    node->prev = nullptr;
    node->next = nullptr;
    node->data = data;
    return node;
}

doublyLinkedList *insertNode(doublyLinkedList *node, int data)
{
    doublyLinkedList *newNode = new doublyLinkedList();
    newNode->data = data;
    newNode->prev = node;
    newNode->next = nullptr;
    if (node != nullptr)
    {
        node->next = newNode;
    }

    return newNode;
}
