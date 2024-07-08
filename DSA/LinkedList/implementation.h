template <typename T>
struct ListNode
{
    T data;
    ListNode *next;
};

template <typename T>
ListNode<T> *createNewListNode(T data)
{
    ListNode<T> *node = new ListNode<T>();
    node->data = data;
    node->next = nullptr;
    return node;
}
template <typename T>
void insertNodeAtTail(ListNode<T> *head, T data)
{
    ListNode<T> *newNode = createNewListNode(data);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    ListNode<T> *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }

    current->next = newNode;
}

template <typename T>
ListNode<T> *getMiddleNode(ListNode<T> *head)
{
    ListNode<T> *slowptr = head;
    ListNode<T> *fastptr = head;
    while (fastptr && fastptr->next)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    }

    return slowptr;
}

template <typename T>
ListNode<T> *reverseLinkedList(ListNode<T> *head)
{
    ListNode<T> *prev = nullptr;
    ListNode<T> *current = head;
    ListNode<T> *next;
    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

template <typename T>
ListNode<T> *insertNodeAtHead(ListNode<T> *head, T data)
{
    ListNode<T> *newNode = createNewListNode<T>(data);
    newNode->next = head;
    head = newNode;
    return head;
}

template <typename T>
bool searchByData(ListNode<T> *head, T target)
{
    ListNode<T> *ptr = head;
    while (ptr != nullptr)
    {
        if (target == ptr->data)
        {
            return true;
        }
        ptr = ptr->next;
    }

    return false;
}

template <typename T>
void deleteNodeByData(ListNode<T> *head, T target)
{
    if (head == nullptr)
    {
        return;
    }
    ListNode<T> *dummy = createNewListNode<T>(T());
    dummy->next = head;
    ListNode<T> *ptr = dummy;
    while (ptr->next != nullptr)
    {
        if (ptr->next->data == target)
        {
            ListNode<T> *temp = ptr->next->next;
            delete ptr->next;
            ptr->next = temp;
            break;
        }
        ptr = ptr->next;
    }
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