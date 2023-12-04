#include "implementation.h"


using namespace std;

bool isValid(string s){
    Stack<char> stack;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] == '(') || (s[i] =='[') || (s[i] == '{') )
        {
            stack.push(s[i]);
        } else if (stack.isEmpty())
        {
            return false;
        } else if (s[i] == ')' && stack.gettop() == '(')
        {
            stack.pop();

        } else if (s[i] == ']' && stack.gettop() == '[')
        {
            stack.pop();

        } else if( s[i]== '}' && stack.gettop() == '{') {
            stack.pop();

        } else {
            return false;
        }
    }
    
    return stack.isEmpty();
    
    
};

int main() {
    string check;
    cin >> check;
    if (isValid(check))
    {
        cout << "VAlid";
    } else {
        cout << "INvalid";
    }
    

return 0;
}