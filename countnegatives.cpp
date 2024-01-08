#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bruteCountNegatives(vector<vector<int>> &grid)
{
    int count = grid.size();
    int counter = 0;
    for (auto i : grid)
    {
        for (int n : i)
        {
            if (n < 0)
            {
                counter += 1;
            }
        }
    }

    return counter;
}

int binarycountnegatives(vector<vector<int>> grid){
    int counter = 0;
    int count = grid.size();

}

int binarySearch(vector<int> grid,int n){
    int low = 0,int high = n-1;
    while (low <= high)
    {
        int mid = (low+high)/2;
        if(grid[mid]<high) high = mid-1;
        else low = mid+1; 
    }
    if(low>=n) return 0; 
    return n-low; 
}

int main()
{
    vector<vector<int>> grid = {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    int answer = bruteCountNegatives(grid);
    cout << answer;
    return 0;
}
