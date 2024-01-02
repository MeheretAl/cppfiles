#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>



using namespace std;

vector<vector<string>> groupanagrams(vector<string>& strs) {
    unordered_map<string,vector<string>> mapp;
        for(string str: strs) {
            string word = str;
            sort(word.begin(),word.end());
            mapp[word].push_back(str);
        }
    
    vector<vector<string>> answer;

    for(const auto& pairs:mapp) {
        answer.push_back(pairs.second);
    }

    return answer;
    
}


int main() {
    vector<string> words = {"aet","ate","pat","tap","and"};
    groupanagrams(words);


    return 0;
}