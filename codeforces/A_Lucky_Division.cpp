#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int lucky_numbers[] = {4,7,47,74,447,474,477};

    int n;
    cin >> n;
    bool flag = false;
    for (int i = 0; i < 7; i++)
    {
        if (n%lucky_numbers[i] == 0)
        {
            flag = true;
            break;
        }
        
    }
    
    if (flag)
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
    

    return 0;
}