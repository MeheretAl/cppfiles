#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int questions;
    cin >> questions;
    int arr[3] = {0,0,0};
    while (questions--)
    {
        int first,second,third;
        cin >> first >> second>> third;
        arr[0] += first;
        arr[1] += second;
        arr[2] += third;
    }
    bool flag = false;

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] != 0)
        {
            flag = false;
            break;
        } else {
            flag = true;
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

