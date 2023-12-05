#include "implementation.h"


using namespace std;

string remove(string str) {
    int count = 0;
    string result = "";
    Stack<char> stack;
    for (int i = 0;i<str.length();i+=1 )
    {
        if (str[i] == '(' && count > 0)
        {
            result += str[i];
        } else if (str[i] == ')' && count > 1)
        {
            result+= str[i];
        }
        if (str[i] == '(')
        {
            count+=1;
        } else {
            count -=1;
        }
    }
    cout << result;
    return result;
}


int main() {
    string check;
    check = "(()())(())(()(())))";
    remove(check);



    return 0;
}