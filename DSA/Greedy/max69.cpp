#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int max69(int nums){
    string ans;
    vector<int> vec1;
    while (nums>0)
    {
        int digit = nums%10;
        vec1.push_back(digit);
        nums/=10;
    }
    reverse(vec1.begin(),vec1.end());
    
    int count = vec1.size();
    for (int i = 0; i < count; i++)
    {
        if (vec1[i] == 6)
        {
            vec1[i] = 9;
            break;
        }
    }

    for(int n:vec1){
        ans+=to_string(n);
    }

    return stoi(ans);
    

}


int main() {
    int nums = 6669;
    int ans = max69(nums);
    cout<< ans;


    return 0;
}