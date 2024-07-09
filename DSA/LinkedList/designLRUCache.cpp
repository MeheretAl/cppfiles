#include <iostream>
#include <unordered_map>

using namespace std;

struct LinkedList
{
    LinkedList *prev;
    LinkedList *next;
    int value;
    int key;
};

LinkedList *createNewLinkedList(int key, int value)
{
    LinkedList *node = new LinkedList();
    node->prev = nullptr;
    node->next = nullptr;
    node->key = key;
    node->value = value;
    return node;
}

LinkedList *insertAtHead(LinkedList *head, LinkedList *newNode)
{
    newNode->next = head->next;
    newNode->prev = head;
    head->next->prev = newNode;
    head->next = newNode;
    return newNode;
}

void removeNode(LinkedList *node)
{
    node->prev->next = node->next;
    node->next->prev = node->prev;
}

class LRUCache
{
private:
    int capacity;
    unordered_map<int, LinkedList *> map1;
    LinkedList *head;
    LinkedList *tail;

public:
    LRUCache(int cap) : capacity(cap)
    {
        head = new LinkedList();
        tail = new LinkedList();
        head->next = tail;
        tail->prev = head;
    }

    int get(int key)
    {
        if (map1.find(key) == map1.end())
        {
            return -1;
        }
        LinkedList *node = map1[key];
        removeNode(node);
        insertAtHead(head, node);
        return node->value;
    }

    void put(int key, int value)
    {
        if (map1.find(key) != map1.end())
        {
            LinkedList *node = map1[key];
            node->value = value;
            removeNode(node);
            insertAtHead(head, node);
        }
        else
        {
            if (map1.size() == capacity)
            {
                LinkedList *lru = tail->prev;
                removeNode(lru);
                map1.erase(lru->key);
                delete lru;
            }
            LinkedList *newNode = createNewLinkedList(key, value);
            map1[key] = newNode;
            insertAtHead(head, newNode);
        }
    }
};

int main()
{
    LRUCache cache(2); // Create a cache with capacity 2

    cache.put(1, 1);
    cache.put(2, 2);
    cout << cache.get(1) << endl; // Should return 1
    cache.put(3, 3);              // Evicts key 2
    cout << cache.get(2) << endl; // Should return -1 (not found)
    cache.put(4, 4);              // Evicts key 1
    cout << cache.get(1) << endl; // Should return -1 (not found)
    cout << cache.get(3) << endl; // Should return 3
    cout << cache.get(4) << endl; // Should return 4

    return 0;
}
