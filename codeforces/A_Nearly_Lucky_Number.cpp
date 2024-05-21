#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<int,int> luck = {{4,0},{7,0}};
    int64_t num;
    cin >> num;
    while (num)
    {
        int digit = num % 10;
        if(luck.find(digit) != luck.end()) {
            luck[digit] += 1;
        }
        num/=10;
    }
    int sum = 0;
    for (const auto &pair : luck)
    {
        sum += pair.second;
    }

    if (sum == 4 || sum==7)
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    
    
    
    return 0;
}
