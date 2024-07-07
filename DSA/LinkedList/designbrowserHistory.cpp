#include "doublyLinkedList.h"
#include "string"
#include <iostream>

using namespace std;

class BrowserHistory
{
private:
    doublyLinkedList<string> *history;

public:
    int length = 1;

    BrowserHistory(const string &homepage)
    {
        history = createDoublyLink(homepage);
        cout << "initialized browserHistory with " << homepage << endl;
    }

    void visit(string url)
    {
        doublyLinkedList<string> *newNode = createDoublyLink(url);
        newNode->prev = history;
        history->next = newNode;
        history = newNode;
        length += 1;
        cout << "NULL";
    }

    void getHistory()
    {
        doublyLinkedList<string> *curr = history;
        while (curr->prev)
        {
            curr = curr->prev;
        }

        while (curr)
        {
            cout << curr->data << endl;
            curr = curr->next;
        }
    }

    string back(int steps)
    {
        int count = 0;
        while (history->prev && count < steps)
        {
            history = history->prev;
            count++;
        }

        return history->data;
    }

    string forward(int steps)
    {
        int count = 0;
        while (history->next && count < steps)
        {
            history = history->next;
            count++;
        }

        return history->data;
    }
};

int main(int argc, char const *argv[])
{
    string homepage = "leetcode.com";
    BrowserHistory *history = new BrowserHistory(homepage);
    history->visit("google.com");
    history->visit("facebook.com");
    history->visit("youtube.com");
    // history->getHistory();
    // cout << history->length << endl;
    cout << history->back(1) << endl;
    cout << history->back(1) << endl;
    cout << history->forward(1);
    history->visit("linkedin.com");
    cout << history->forward(2) << endl;
    cout << history->back(2) << endl;
    cout << history->back(7) << endl;
}

//["BrowserHistory","   visit",         "visit",            "visit",    "back","back","forward","visit","forward","back","back"]
//[ ["leetcode.com"], ["google.com"], ["facebook.com"], ["youtube.com"], [1], [1], [1], ["linkedin.com"], [2], [2], [7] ]
//[ null, null, null, null, "facebook.com", "google.com", "facebook.com", null, "linkedin.com", "google.com", "leetcode.com" ]