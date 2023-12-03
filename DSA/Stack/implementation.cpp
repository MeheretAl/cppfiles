#include <iostream>

using namespace std;
//the size of the array to be the stack is
//set to a maximum of 2000
#define MAX 2000

class Stack
{
// the top element can't be accessed 
// out of the class
private:
    int top;
public:
// array with size set to MAx
    int array[MAX]; 
// intializing the top element as -1
// essentially making it empty at first
    Stack(){top = -1;};
// push to add elements to the stack if
// the stack size is less than MAX
    bool push(int x);
// remove the top most element of the stack
    int pop();
// check if the Stack is empty or not
    bool isEmpty();
// look at the the top most element of the stack
    int look();
};

bool Stack::isEmpty() {
    return top < 0;
}

bool Stack::push(int x) {
    if (top >= MAX-1)
    {
        cout << "Stack is filled";
        return false;
    }
    else{
        //add x to the top of the stack
        array[++top] = x;
        cout << x << " added to stack\n";
        return true;
    }
}

int Stack::look(){
    if (!isEmpty())
    {
        return array[top];
    }
    else{
        cout << "Stack is empty";
        return -1;
    }   
}

int Stack::pop(){
    if (!isEmpty())
    {
        int x = array[top--];
        return x;
    }
     else{
        return -1;
     } 
};




int main()
{
    Stack s;
    s.push(10);
    s.push(5);
    s.push(25);
    cout << s.pop() << " removed from stack\n";

    cout  << "Top element is " << s.look() << endl;

    cout << " Elements in stack: ";
    while (!s.isEmpty())
    {
        cout << s.look() << " ";
        s.pop();
    }
    

    return 0;
}
