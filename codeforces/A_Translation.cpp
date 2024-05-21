#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string word;
    string reversedWord;
    cin >> word;
    cin >> reversedWord;
    string reversed = "";

    for (int i = word.size()- 1; i >= 0; i--)
    {
        reversed += word[i];
    }

    if (reversedWord == reversed ) {
        cout << "YES";
    } else {
        cout << "NO";
    }
   
    

    return 0;
}
