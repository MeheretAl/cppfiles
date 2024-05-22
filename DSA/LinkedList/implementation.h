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

void insertNodeAtTail(ListNode *head, int data)
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

ListNode* getMiddleNode(ListNode* head){
    ListNode* slowptr = head;
    ListNode* fastptr = head;
    while (fastptr  && fastptr->next)
    {   
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    }

    return slowptr;
    
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

ListNode *insertNodeAtHead(ListNode *head, int data)
{
    ListNode *newNode = createNewListNode(data);
    newNode->next = head;
    head = newNode;
    return head;
}

bool searchByData(ListNode *head, int target)
{
    ListNode *ptr = head;
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

void deleteNodeByData(ListNode *head, int target)
{
    if (head == nullptr)
    {
        return;
    }
    ListNode *dummy = createNewListNode(0);
    dummy->next = head;
    ListNode *ptr = dummy;
    while (ptr->next != nullptr)
    {
        if (ptr->next->data == target)
        {
            ListNode *temp = ptr->next->next;
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