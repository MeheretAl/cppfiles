#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,height;
    cin >> n >> height;
    int width = 0;
    while (n--)
    {
        int sHeight;
        cin >> sHeight;
        if (sHeight > height)
        {
            width += 2;
        } else width += 1;
        
    }
    cout << width;
    return 0;
}