#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

vector<int> findCommonElements(const vector<int>& nums1, const vector<int>& nums2, const vector<int>& nums3) {
    unordered_map<int, int> mymap;
    unordered_set<int> visited;
    vector<int> answer;

    for (int i : nums1) {
        mymap[i]++;
    }
    for (int i : nums2) {
        mymap[i]++;
    }
    for (int i : nums3) {
        mymap[i]++;
    }

    for (auto& pairs : mymap) {
        if (pairs.second >= 2 && visited.find(pairs.first) == visited.end()) {
            answer.push_back(pairs.first);
            visited.insert(pairs.first);
        }
    }

    return answer;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 3};
    vector<int> nums2 = {2, 3, 4};
    vector<int> nums3 = {2, 5};

    vector<int> result = findCommonElements(nums1, nums2, nums3);

    // Print the result
    cout << "Common elements appearing in at least two vectors: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
