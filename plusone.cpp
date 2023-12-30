#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <string>

using namespace std;

vector<int> plusone(vector<int>& digits) {
    int count = digits.size();
    int carry = 1;
    vector<int> answer;


    for (int i = count-1; i >= 0; i--)
    {
        int addition = digits[i]+carry;
        answer.push_back(addition%10);
        carry = addition/10;
    }

    if (carry>1)
    {
        answer.push_back(carry);
    }
    //reverse(answer.begin(),answer.end());
    return answer;
    


    
}

int main() {
    vector<int> num = {9,8,7,6,5,4,3,2,1,0};
    vector<int> result = plusone(num);
    for(int i:result) {
        cout << i << endl;
    }
    
    
    


    return 0;
}