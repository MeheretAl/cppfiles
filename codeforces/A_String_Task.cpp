#include <iostream>
#include <unordered_set>
#include <cctype>

using namespace std;



int main(int argc, char const *argv[])
{
    unordered_set<char> vowels = {'A', 'O', 'Y', 'E', 'U', 'I', 'a', 'o', 'y', 'e', 'u', 'i'};
    string result;
    string input;
    cin >> input;
    for(char c:input) {
        if (vowels.find(c) != vowels.end())
        {
            continue;
        }
        else
        {
            result += '.';
            result += tolower(c);
        }   
    }

    cout << result;
    return 0;
}

