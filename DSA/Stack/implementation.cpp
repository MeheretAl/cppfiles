#include <iostream>

using namespace std;
//the size of the array to be the stack is
//set to a maximum of 2000

//template T for elements of the array
template <typename T>
class Stack
{
// the top element can't be accessed 
// out of the class
private:
    int top;
    int MAX;
    T* array;
public:
//constructor
Stack(int size = 2000) : top(-1), MAX(size) {
    array = new T[MAX];
}
//destructor to free dynamically allocated memory
~Stack() {
    delete[] array;
}

// push to add elements to the stack if
// the stack size is less than MAX
    bool push(T x) {
        if(top >= MAX-1){
            cout << "Stack is full " << endl ;
            return false;
        } else{
            array[++top] = x;
            cout << x  << " added to stack\n";
            return true;
        }
    };
// remove the top most element of the stack
    T pop() {
        if(!isEmpty()) {
            T x = array[top--];
            return x;
        }else{
            cout << "Stack is empty " << endl;
            //default-constructed value for T
            return T();
        }
    };
// check if the Stack is empty or not
    bool isEmpty() {
        return top == -1;
    };
    
// look at the the top most element of the stack
    T look() {
        if (!isEmpty())
        {
            T x = array[top];
            return x;
        } else {
            return -1;
        }
        
    };
};

//sample implementation
int main() {
    Stack<char> charstack;
    charstack.push('e');
    charstack.push('y');
    charstack.push('S');
    charstack.push('5');

    cout << charstack.pop() << " is removed from the stack\n";
    cout << "These are the members of the stack\n";
    while (!charstack.isEmpty())
    {
        cout << charstack.look() << " ";
        charstack.pop();
    }
    


    return 0;
}