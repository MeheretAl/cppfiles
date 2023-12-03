#include "implementation.cpp"

using namespace std;

int precedence(char c) {
    if (c == '^')
    {
        return 3; // highest precedence
    }
    else if (c == '*' || c == '/')
    {
        return 2;//second highest precedence
    }
    else if(c == '+' || c == '-'){
        return 1; //lowest precedence
    }
}

void infixtopostfix(string s){
    Stack<char> 
}