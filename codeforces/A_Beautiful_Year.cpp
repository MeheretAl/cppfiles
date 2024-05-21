#include <iostream>
#include <unordered_set>

using namespace std;

int main(int argc, char const *argv[])
{
    unordered_set<int> unique;
    int num;
    cin >> num;
    int comp = num;
    while (num)
    {
        int digit = num%10;
        unique.insert(digit);
        num = num/10;
    }

    while (comp)
    {   
        int digit = num%10;
        if (unique.find(digit) != unique.end())
        {
            /* code */
        }
        
        int currYear = comp+1;

    }
    

       
    return 0;
}