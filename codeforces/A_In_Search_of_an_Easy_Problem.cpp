#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    bool flag = false;
    while (n--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            flag = true;
            break;
        } else {
            continue;
        }
    }
    if (flag)
    {
        cout << "HARD";
    } else {
        cout << "EASY";
    }
    

       
    return 0;
}