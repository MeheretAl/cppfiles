#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;
/*
Given an integer array nums and an integer k,
return the k most frequent elements.
You may return the answer in any order.
Example 1:
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
*/

vector<int> mostfrequent(vector<int> &nums, int k)
{
    map<int, int> frequency;
    vector<int> answer;
    priority_queue<pair<int, int>> queue1;

    for (int num : nums)
    {
        frequency[num]++;
    }

    for (const auto &entry : frequency)
    {
        queue1.push({entry.first, entry.second});

        if (queue1.size() > k)
        {
            queue1.pop();
        }
    }

    while (!queue1.empty())
    {
        answer.push_back(queue1.top().first);
        queue1.pop();
    }

    reverse(answer.begin(), answer.end());

    return answer;
}

using namespace std;

int main()
{
    vector<int> question = {1};
    // vector<int> answer = ;
    // for(int i:answer) {
    //   cout << i << endl;
    //}
    vector<int> answer = mostfrequent(question, 1);

    return 0;
}