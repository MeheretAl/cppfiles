#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rob(vector<vector<string>>& banks){
   int answer = 0;
   vector<int> holder;

    for (auto row : banks) {
        int counter = 0;
        for (auto str : row) {
            counter = count(str.begin(), str.end(), '1');
            if (counter > 0)
            {
                holder.push_back(counter);
            }
            
        }
        
    }

    for (int i = 0; i < holder.size()-1; i++)
    {
        int product = holder[i] * holder[i+1];
        answer += product;
    }
    
    cout << answer;


    
}



int main() {
    vector<vector<string>> banks = {{"011001","000000","010100","001000"}};
    rob(banks);
    


    return 0;
}