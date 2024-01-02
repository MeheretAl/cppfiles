#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int highestaltitude(vector<int>& altitude) {
    int maximum = 0;
    int currentmaximum = 0;
    int count = altitude.size();
    for (int i = 0; i < count; i++)
    {
        maximum += altitude[i];
        currentmaximum = max(maximum,currentmaximum);
        
       
    }

    return maximum;
}

int main() {
    vector<int> altitude = {-4,-3,-2,-1,4,3,2};
    //int answer = ;
    int answer = highestaltitude(altitude);
    cout << answer;

    return 0;
}