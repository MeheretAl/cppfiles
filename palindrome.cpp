#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
    class Solution{
        public:
            bool ispalindrome(int x) {
                string y = to_string(x);
                reverse(y.begin(),y.end());
                string strx = to_string(x);
                return strx == y;
            };
    };
}