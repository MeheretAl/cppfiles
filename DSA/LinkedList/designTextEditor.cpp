#include "doublyLinkedList.h"
#include <iostream>
#include <algorithm>

using namespace std;

class TextEditor
{
private:
    doublyLinkedList<char> *head;

public:
    TextEditor()
    {
        head = new doublyLinkedList<char>;
        head->data = '@'; // holder value
        head->prev = nullptr;
        head->next = nullptr;
    }

    void addText(string text)
    {
        doublyLinkedList<char> *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }

        for (char letter : text)
        {
            doublyLinkedList<char> *newNode = new doublyLinkedList<char>;
            newNode->data = letter;
            newNode->prev = current;
            newNode->next = nullptr;

            current->next = newNode;
            current = newNode;
        }
    }

    string printCurr()
    {
        doublyLinkedList<char> *curr = head;
        string ans = "";
        while (curr != nullptr)
        {
            ans += string(1, curr->data);
            curr = curr->next;
        }

        return ans;
    }
};

int main(int argc, char const *argv[])
{
    TextEditor *obj = new TextEditor();
    cout << obj->printCurr() << endl;
    obj->addText("leetcode");
    cout << obj->printCurr() << endl;
}
