#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void maxWidthOfVerticalArea(vector<vector<int>> &points)
{
    sort(points.begin(), points.end(), [](const vector<int> a, const vector<int> b)
         { return a[0] > b[0]; });
    int count = points.size();
    int maxlength = points[0][0] - points[1][0];

    for (int i = 0; i < count - 1; i++)
    {

        maxlength = max(points[i][0] - points[i + 1][0], maxlength);
    }


}

int main()
{
    vector<vector<int>> nums = {{3, 1}, {9, 0}, {1, 0}, {1, 4}, {5, 3}, {8, 8}};

    maxWidthOfVerticalArea(nums);

    return 0;
}