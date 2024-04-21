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

doublyLinkedList *insertNodeBefore(doublyLinkedList *node, int data)
{
    doublyLinkedList *newNode = new doublyLinkedList();
    newNode->data = data;
    newNode->prev = node->prev;
    newNode->next = node->next;

    if (node->prev == nullptr)
    {
        node->prev->next = newNode;
    }
    node->prev = newNode;

    return newNode;
}

bool nodeExists(doublyLinkedList *node, int target)
{
    doublyLinkedList *ptr = node;
    while (ptr != nullptr)
    {
        if (ptr->data == target)
        {
            return true;
        }
    }

    return false;
}

void deleteNodeByData(doublyLinkedList *node, int target)
{
    doublyLinkedList *ptr = node;
    while (ptr != nullptr)
    {
        if (ptr->data == target)
        {
            // if the node before the current node isn't the head node
            if (ptr->prev != nullptr)
            {
                ptr->prev->next = ptr->next;
            }
            // if the node after the current node isn't the tail node
            if (ptr->next != nullptr)
            {
                ptr->next->prev = ptr->prev;
            }

            if (ptr == node)
            {
                node = ptr->next;
            }

            delete ptr;
            return;
        }
        ptr = ptr->next;
    }

    cout << "Node with data " << target << " not found";
}