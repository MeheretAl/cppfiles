#include <stack>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        stack<char> stack;
        int total = 0;
        string str = "";
        for (string &c : operations)
        {
            str += c;
        }

        for (int i = 0; i < str.size(); i++)
        {
            if (isdigit(str[i]))
            {
                int digit = str[i] - '0';
                stack.push(digit);
                cout << endl;
                total += digit;
                cout << total << "checking\n";
            }
            else if (str[i] == 'D')
            {
                stack.push(stack.top() * 2);
                total += stack.top() * 2;
                cout << total << " Checking\n";
            }
            else if (str[i] == '+')
            {
                int holder = stack.top();
                stack.pop();
                int holder2 = stack.top();
                stack.push(holder);
                stack.push(holder2);
                cout << " checking at "
                     << " holder 2 " << total << endl;
                total += holder + holder2;
                stack.push(holder + holder2);
            }
            else if (str[i] == 'C')
            {
                total -= stack.top();
                stack.pop();
                cout << " checking at end " << total << endl;
            }
        }
        return total;
    }
};

int main()
{
    Solution sol1;
    vector<string> operations;
    operations.push_back("5");
    operations.push_back("2");
    operations.push_back("C");
    operations.push_back("D");
    operations.push_back("+");
    cout << sol1.calPoints(operations);
}
