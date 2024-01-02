#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

vector<int> productarray(vector<int>& nums){
    int count = nums.size();
    int prefix = 1;
    int suffix = 1;
    vector<int> prefixproduct(count,1);
    vector<int> suffixproduct(count,1);
    vector<int> answer(count,0);
    for (int i = 0; i < count; i++)
    {
        prefixproduct[i] = prefix;
        prefix *= nums[i]; 
    }

    for (int i = count-1; i >= 0; --i)
    {
        suffixproduct[i] = suffix;
        suffix *= nums[i];
    }

    for (int i = 0; i < count; i++)
    {
        answer[i] = prefixproduct[i] * suffixproduct[i];
    }
    
    return answer;
     
     
    
}

int main() {
    vector<int> check = {1,2,3,4};
    vector<int> answer = productarray(check);
    for(int i:answer){
        cout << i << endl;
    }


    return 0;
}