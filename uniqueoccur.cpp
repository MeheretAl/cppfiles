#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

bool isUnique(vector<int> &nums)
{
    unordered_map<int, int> freq;
    for (int i : nums)
    {
        freq[i]++;
    }
    vector<int> check;

    for (const auto pairs : freq)
    {
        check.push_back(pairs.second);
    }

    int count = check.size();
    sort(check.begin(), check.end());
    for (int i = 0; i < count; i++)
    {
        if (check[i] == check[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{

    vector<int> nums = {1,2};

    if (isUnique(nums))
    {
        cout << "Bombooclaat";
    } else {
        cout << "Nah";
    }

    return 0;
    
}