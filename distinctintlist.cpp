#include <algorithm>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

vector<vector<int>> findMatrix(vector<int> &nums)
{
    unordered_map<int, int> frequencyMap;
    int counter = 0;

    for (auto a : nums)
    {
        frequencyMap[a]++;
        counter = max(counter, frequencyMap[a]);
    }
    vector<vector<int>> answer(counter);
    for (auto a : frequencyMap)
    {
        int num = a.first;
        int freq = a.second;

        for (int i = 0; i < freq; i++)
        {
            answer[i].push_back(num);
        }
    }
    return answer;
}

int main()
{
    vector<vector<int>> answer;
    vector<int> test = {1, 2, 1, 3, 2, 4, 2, 1, 3, 4, 3, 2, 1, 2, 4, 6};
    answer = findMatrix(test);
    for (vector<int> row : answer)
    {
        cout << "[";
        for (int i = 0; i < row.size(); i++)
        {
            cout << row[i];
            if (i < row.size()-1)
            {
                cout << ",";
            }   
        }
        
        cout << "]";
        cout << endl;
    }

    return 0;
}
