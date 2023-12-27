#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

void Sorted(vector<int> &nums)
{
    unordered_map<int, int> frequencymap;
    vector<pair<int, int>> answer;
    vector<int> realanswer;
    for (int i : nums)
    {
        frequencymap[i]++;
    }

    for (const auto &pairs : frequencymap)
    {
        answer.push_back(pairs);
    }
                                            
    sort(answer.begin(), answer.end(), [](const auto &a, const auto &b)
         {
            //lambda function here
             if (a.second == b.second)
             {
                 return a.first > b.first;
             }
             else
             {
                 return a.second < b.second;
             }
         });

    for (const auto &pairs : answer)
    {
        for (int i = 0; i < pairs.second; i++)
        {
            realanswer.push_back(pairs.first);
        }
    }

    
}

int main()
{

    vector<int> nums = {2, 3, 1, 3, 2};
    Sorted(nums); // 1,3,3,2,2

    return 0;
}