#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int space = 0;
    while (n--)
    {
        int p,q;
        cin >> p;
        cin >> q;
        if (q - p >= 2)
        {
            space += 1;
        }
        
    }

    cout << space;
    
    return 0;
}