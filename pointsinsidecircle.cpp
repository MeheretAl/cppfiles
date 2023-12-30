#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    vector<vector<int>> points = {{1, 0}, {1, 9}, {2, 3}, {3, 4}, {15, 15}};
    vector<vector<int>> queries = {{2, 3, 1}, {4, 3, 1}, {1, 1, 2}};
    vector<int> answer;

    for (int i = 0; i < queries.size(); i++)
    {
        int holder = 0;
        int xcenter = queries[i][0];
        int ycenter = queries[i][1];
        int radius = queries[i][2];

        for (int j = 0; j < points.size(); j++)
        {
            int x = points[j][0];
            int y = points[j][1];

            double checkdistance = pow(x - xcenter, 2) + pow(y - ycenter, 2);
            if (checkdistance <= radius)
            {
                holder += 1;
            }
        }

        answer.push_back(holder);
    }

    cout << "Answers" << endl;
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }

    return 0;
}
