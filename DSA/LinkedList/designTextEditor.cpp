#include <string>
#include <algorithm>

using namespace std;

class Node
{
public:
    char val;
    Node *next;
    Node *prev;

    Node(char val)
    {
        this->val = val;
        next = prev = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    Node *cursor;
    LinkedList()
    {

        this->head = new Node('@');
        this->cursor = head;
    }

    void insert(char val)
    { // add new node after cursor and move cursor
        Node *node = new Node(val);
        Node *temp = cursor->next;
        cursor->next = node;
        node->next = temp;
        node->prev = cursor;
        if (temp != nullptr)
            temp->prev = node;

        cursor = cursor->next;
    }

    void deleteNode()
    {
        if (cursor->prev == nullptr)
        {
            return;
        }
        Node *temp = cursor;
        temp->prev->next = temp->next;
        if (temp->next != nullptr)
            temp->next->prev = temp->prev;
        cursor = cursor->prev;
        delete (temp);
    }

    void moveLeft()
    {
        cursor = cursor->prev;
    }
    void moveRight()
    {
        cursor = cursor->next;
    }
    string leftChars()
    {
        Node *temp = cursor;
        string ans = "";

        int count = 10;
        while (count > 0 && temp->val != '@')
        {
            ans += temp->val;
            temp = temp->prev;
            count--;
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};

class TextEditor
{
public:
    LinkedList *list;
    TextEditor()
    {
        list = new LinkedList();
    }

    // insert text in linkedlist
    void addText(string text)
    {
        for (int i = 0; i < text.size(); i++)
        {
            list->insert(text[i]);
        }
    }

    int deleteText(int k)
    {
        int ans = 0;
        while (k > 0 && list->cursor->val != '@')
        {
            list->deleteNode();
            ans++;
            k--;
        }
        return ans;
    }

    string cursorLeft(int k)
    {
        while (k > 0 && list->cursor->val != '@')
        {
            list->moveLeft();
            k--;
        }
        return list->leftChars();
    }

    string cursorRight(int k)
    {
        while (k > 0 && list->cursor->next != nullptr)
        {
            list->moveRight();
            k--;
        }
        return list->leftChars();
    }
};
