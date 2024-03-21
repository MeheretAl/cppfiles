#include <iostream>
#include <map>
#include <cctype>

using namespace std;

bool isAlike(string s){
    map<char,int> vowelCount = {{'a',0},{'e',0},{'i',0},{'o',0},{'u',0}};
    int halfSize = s.size()/2;
    int counter = 0;
    for (int i = 0; i < halfSize; i++)
    {
        char char1 = s[i];
        char char2 = s[i+halfSize];
        if(vowelCount.find(char1) != vowelCount.end()) counter+=1;
        if(vowelCount.find(char2) != vowelCount.end()) counter-=1;
    }

    return counter == 0;
    
}


int main(){
    string check = "Bool";
    if (isAlike(check))
    {
        cout << "yes";
    } else {
        cout << "nuh uh";
    }
     


    return 0;
}