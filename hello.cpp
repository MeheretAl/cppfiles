#include <iostream>

using namespace std;

bool check(string str){
    for (int i = 0;i<str.length();i++)
    if (isdigit(str[i])== false)
    return false;
    return true;
    }

int main() {
    string str;
    cout << "Input:\n";
    cin >> str;
    if (check(str)) {
        cout<< str << "is an integer" <<endl;
    }
    else {
        cout << str<< "is a string" <<endl;
    }
   return 0;
}