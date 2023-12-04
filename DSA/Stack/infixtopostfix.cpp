#include "implementation.h"
#include <string>

using namespace std;

int precedence(char c)
{
    if (c == '^')
    {
        return 3; // highest precedence
    }
    else if (c == '*' || c == '/')
    {
        return 2; // second highest precedence
    }
    else if (c == '+' || c == '-')
    {
        return 1; // lowest precedence
    }
    return 0;
}

void infixtopostfix(string s)
{
    Stack<char> charstack;
    string result;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            result += ch;
        }
        else if (ch == '(')
        {
            charstack.push('(');
        }
        else if (ch == ')')
        {
            while (charstack.gettop() != '(')
            {
                result += charstack.gettop();
                charstack.pop();
            }
            charstack.pop();
        }

        else
        {
            while (!charstack.isEmpty() && precedence(s[i]) <= precedence(charstack.gettop()))
            {
                result += charstack.gettop();
                charstack.pop();
            }
            charstack.push(s[i]);
        }
    }

    while (!charstack.isEmpty())
    {
        result += charstack.gettop();
        charstack.pop();
    }
    cout << result << endl;
}

int main() {

    string check = "A+B*(c^D)+e^(f+g*h)-i";

    infixtopostfix(check);

    return 0;
}