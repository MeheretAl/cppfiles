#include <vector>

using namespace std;
int main() {
class Solution {
    public:
    vector<int> twoSums(vector<int>& nums,int target) {
        int length = nums.size();
        for (int i=0; i < length-1;i++) {
            for (int j=i+1;j<length;j++) {
                if (nums[i]+nums[j]==target) {
                    return {i,j};
                };
            }
        }
        return {};
    }
};
}