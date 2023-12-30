#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

vector<vector<int>> flipandinvert(vector<vector<int>> &image)
{
    int count = image.size();
    // flipping -> [1,0,0] --> [0,0,1]
    // inverting -> [1,1,0] --> [0,0,1]

    for (int i = 0; i < count; i++)
    {
        int start = 0;
        int end = image[i].size() - 1;

        while (start < end)
        {
            swap(image[i][start], image[i][end]);
            start++;
            end--;
        }
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < image[i].size(); j++)
        {
            if (image[i][j] == 0)
            {
                image[i][j] += 1;
            }
            else
            {
                image[i][j] -= 1;
            }
        }
    }

    return image;
}

int main()
{
    vector<vector<int>> image = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    // inverted {0,0,1},{0,1,0},{1,1,1}
    // flipped {1,0,0},{0,1,0},{1,1,1}
    // answer = {[1,0,0],[0,1,0],[1,1,1]}
    vector<vector<int>> answer = flipandinvert(image);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < answer[i].size(); j++)
        {
            cout << image[i][j];
            if (j < answer[i].size() - 1)
            {
                cout << ",";
            }
        }
        cout << "]\n";
    }

    return 0;
}
