#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int weight1;
    int weight2;
    cin >> weight1;
    cin >> weight2;
    int years = 0;
    while (weight1 <= weight2)
    {
        weight1 = weight1 * 3;
        weight2 = weight2 * 2;
        years += 1;
    }

    cout << years;
    
    return 0;
}
