#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int minOperations(vector<int>& nums){
    unordered_map<int,int> mymap1;
    int counter = 0;

    for(int n:nums){
        mymap1[n]++;
    }

    //vector<int> nums = {2,2,3,1,1,3,3,2,};
    //do for -1 answer first

    for(const auto& pairs:mymap1){
        int x = pairs.second;
        if(x==1){
            return -1;
        }
        counter += (x+2)/3;
    }
   
    return counter;
}



int main() {
    vector<int> nums = {2,2,3,1,1,3,3,2,};
    //2 - 3 , 1 -2,3-3
    int x = minOperations(nums);
    cout << x;

    return 0;
}