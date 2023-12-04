#include <iostream>

using namespace std;

// template T for elements of the array
template <typename T>
class Stack
{
    // the top element can't be accessed
    // out of the class
private:
    int top;
    int MAX;
    T *array;
public:
    // constructor
    Stack(int size = 2000) : top(-1), MAX(size)
    {
        array = new T[MAX];
    }
    // destructor to free dynamically allocated memory
    ~Stack()
    {
        delete[] array;
    }

    // push to add elements to the stack if
    // the stack size is less than MAX
    bool push(T x)
    {
        if (top >= MAX - 1)
        {
            cout << "Stack is full " << endl;
            return false;
        }
        else
        {
            array[++top] = x;
            return true;
        }
    };
    // remove the top most element of the stack
    T pop()
    {
        if (!isEmpty())
        {
            T x = array[top--];
            return x;
        }
        else
        {
            cout << "Stack is empty " << endl;
            // default-constructed value for T
            return T();
        }
    };
    // check if the Stack is empty or not
    bool isEmpty()
    {
        return top == -1;
    };

    // look at the the top most element of the stack
    T gettop()
    {
        if (!isEmpty())
        {
            T x = array[top];
            return x;
        }
        else
        {
            cout << "Stack is empty";
            return -1;
        }
    };
};
