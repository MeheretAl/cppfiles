#include <iostream>
#include <algorithm>

using namespace std;

void countSort(int arr[], int n)
{
    int maximumElement = *max_element(arr, arr + n); //{1,0,3,1,3} max = 3
    int freq[maximumElement + 1] = {};               // {0,0,0,0}
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++; // {0,0+1,0,0}
                        // {0+1,1,0,0}
                        // {1,1+1,0,0}
                        // {1,2,0,0+1}
                        // {1,2,0,1+1} = {1,2,0,2}
    }

    int index = 0;
    for (int i = 0; i <= maximumElement; i++)
    {
        while (freq[i] > 0)
        {
            arr[index] = i; // arr[1] = 1 , arr[2] = 1  { 1,0,3,1,3} -> {0,1,1,3,3}
            index += 1;     // index =2 , index = 3
            freq[i]--;      //
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 0, 3, 1, 3};
    int length = 5;
    countSort(arr, length);
}