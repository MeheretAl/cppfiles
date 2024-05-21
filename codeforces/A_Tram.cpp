#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int turns;
    cin >> turns;
    int curr = 0;
    int maxPeople = 0;
    while (turns--)
    {   
        int in,out;
        cin >> in;
        cin >> out;
        curr += (out-in);
        if (curr > maxPeople)
        {
            maxPeople = curr;
        } 
    }

    cout << maxPeople;
    
    return 0;
}