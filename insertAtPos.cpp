#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int newArray[7] = {0};
    int size = sizeof(newArray) / sizeof(newArray[0]);
    int position;
    int newNum;
    cin >> position;
    cin >> newNum;
    for (int i = 0; i < size; i++)
    {
        if (i == position)
        {
            newArray[i] = newNum;
            //[0,312,21,43,1,2]
            //[0,312,9,43,1,2]
        }
        else if (i < position)
        {
            newArray[i] == arr[i];
            // int[6] arr;
        }
        else if (i > position)
        {
            // int array[5] = {1, 2, 3, 4, 5};
            // int newArray[6] = {1, 2, 3, 4, 5, 5};
            // pos = 2
            // newarray = [1,2,9,3,4,5]
            newArray[i] = arr[i - 1];
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << newArray[i] << endl;
    }

    return 0;
}
