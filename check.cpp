#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char, char> map1;
    string str1;
    cin >> str1;
    int count = str1.length();
    map1['('] = ')';
    map1['{'] = '}';
    map1['['] = ']';
    return 0;

    bool elements = true;

    for(char ch:str1) {
        auto it = map1.find(ch);
        if (it != map1.end())
        {
            if (it ->second == str1.length())
            {
                elements = false;
                break;
            }
            
        } else {
            elements = false;
            break;
        }
        
    }
    if (elements)
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    
    return 0;
}
