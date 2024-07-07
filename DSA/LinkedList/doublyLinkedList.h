template <typename T>

struct doublyLinkedList
{
    doublyLinkedList *prev;
    doublyLinkedList *next;
    T data;
};

template <typename T>
doublyLinkedList<T> *createDoublyLink(T data)
{
    doublyLinkedList<T> *node = new doublyLinkedList<T>();
    node->prev = nullptr;
    node->next = nullptr;
    node->data = data;
    return node;
}

template <typename T>
doublyLinkedList<T> *insertNode(doublyLinkedList<T> *node, int data)
{
    doublyLinkedList<T> *newNode = new doublyLinkedList<T>();
    newNode->data = data;
    newNode->prev = node;
    newNode->next = nullptr;
    if (node != nullptr)
    {
        node->next = newNode;
    }

    return newNode;
}

template <typename T>
doublyLinkedList<T> *insertNodeBefore(doublyLinkedList<T> *node, int data)
{
    doublyLinkedList<T> *newNode = new doublyLinkedList<T>();
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

template <typename T>
bool nodeExists(doublyLinkedList<T> *node, int target)
{
    doublyLinkedList<T> *ptr = node;
    while (ptr != nullptr)
    {
        if (ptr->data == target)
        {
            return true;
        }
    }

    return false;
}

template <typename T>
void deleteNodeByData(doublyLinkedList<T> *node, int target)
{
    doublyLinkedList<T> *ptr = node;
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
}